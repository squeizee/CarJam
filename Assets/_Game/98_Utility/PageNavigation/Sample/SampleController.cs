using Library.PageNavigation.Scripts;
using UnityEngine;

namespace Library.PageNavigation.Sample
{
    public class SampleController : MonoBehaviour
    {
        [SerializeField] private PageManager _pageManager;

        private void Start()
        {
            _pageManager.Initialize();

            int middlePageIndex = _pageManager.PageCount / 2;
            _pageManager.OpenPage(middlePageIndex);
            _pageManager.ScrollToPage(middlePageIndex);
        }

        private void OnDestroy()
        {
            _pageManager.Clear();
        }
    }
}
