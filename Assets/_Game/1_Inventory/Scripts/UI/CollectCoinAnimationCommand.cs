using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems._CraftCore;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Modules.TweenPresets;
using UnityEngine;

namespace Modules.Inventory.UI
{
    public class CollectCoinAnimationCommand
    {
        public Sequence Execute(int amount, RectTransform target = null, RectTransform source = null)
        {
            var coinItemMeta = CraftInventorySo.Instance.GetItemMeta(ItemId.Currency1);
            var screen = Craft.GetUI<CraftInventoryUI>();
            var screenRect = screen.GetComponent<RectTransform>();
            if (source == null)
            {
                source = screen.Source;
            }

            if (target == null)
            {
                target = screen.Target;
            }

            var Sequence = DOTween.Sequence();
            // create coin prefab
            var coinPrefab = coinItemMeta.ItemPrefab;

            int visualCount = 0;
            if (amount < 10)
            {
                visualCount = 5;
            }
            else if (amount < 20)
            {
                visualCount = 7;
            }
            else if (amount < 50)
            {
                visualCount = 8;
            }
            else if (amount < 100)
            {
                visualCount = 9;
            }
            else if (amount < 200)
            {
                visualCount = 10;
            }
            else
            {
                visualCount = 12;
            }

            // play sound
            Sequence.InsertCallback(0, Craft.Get<CraftSoundSystem>().CoinSoundEffect.Play);

            visualCount = Mathf.Min(visualCount, amount);
            int coinAmount = amount / visualCount;
            float startDelay = 0;
            for (int i = 0; i < visualCount; i++)
            {
                GameObject coin = Object.Instantiate(coinPrefab, screen.transform);
                RectTransform item = coin.GetComponent<RectTransform>();
                item.anchoredPosition = UIUtility.SwitchToRectTransform(source, screenRect) +
                                        new Vector2(Random.Range(-100f, 100f), Random.Range(-100f, 100f));

                Vector3 itemInitialScale = item.localScale;
                item.localScale = Vector3.zero;
                item.gameObject.SetActive(true);

                float currentTime = startDelay;
                float scaleUpDuration = 0.15f;
                Sequence.Insert(currentTime, item.transform.DOScale(itemInitialScale, scaleUpDuration));
                currentTime += scaleUpDuration;
                Tween itemTween = item.DoAnchoredGravity(
                    UIUtility.SwitchToRectTransform(target,
                        item.parent.GetComponent<RectTransform>()
                    ));
                Sequence.Insert(currentTime, itemTween);
                Sequence.Insert(currentTime, item.transform.DOScale(0.9f, 1).SetEase(Ease.InBack, 2f));

                currentTime += itemTween.Duration();
                Sequence.InsertCallback(currentTime, () =>
                {
                    Craft.Get<CraftVibrationSystem>().VibrateLight();
                    item.gameObject.SetActive(false);
                    Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1)
                        .ClaimQue(coinAmount);
                    target.DoSqueezeScale();
                });

                startDelay += 0.06f;
            }

            Sequence.InsertCallback(0.6f, screen.CoinSoundFxUnit.Play);
            Sequence.AppendCallback(Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1).ClaimAllQue);

            return Sequence;
        }
    }
}