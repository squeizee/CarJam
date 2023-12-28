using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using Lofelt.NiceVibrations;

namespace _Game.Systems._CraftCore
{
    public class CraftVibrationSystem : BaseCraftSystem, ICraftSystem
    {
        private PersistentBool _isVibrationOn =
            new PersistentBool($"{nameof(CraftVibrationSystem)}_{nameof(_isVibrationOn)}", true);
        public bool IsVibrationOn => _isVibrationOn.Value;
        public CraftVibrationSystem()
        {
            Priority = 0;
        }
        
        public void SwitchVibration()
        {
            _isVibrationOn.Value = !_isVibrationOn.Value;
        }
        
        public void  VibrateWithId(int id)
        {
            switch (id)
            {
                case 1:
                    VibrateLight();
                    break;
                case 2:
                    VibrateMedium();
                    break;
                case 3:
                    VibrateRigid();
                    break;
                case 4:
                    VibrateHard();
                    break;
            }
        }

        public void VibrateSuccess()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.Success);
            }
        }

        public void VibrateLong()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.Success);
            }
        }

        public void VibrateFail()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.Failure);
            }
        }

        public void VibrateLight()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.LightImpact);
            }
        }

        public void VibrateHard()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.HeavyImpact);
            }
        }

        public void VibrateMedium()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.MediumImpact);
            }
        }

        public void VibrateRigid()
        {
            if (_isVibrationOn)
            {
                HapticPatterns.PlayPreset(HapticPatterns.PresetType.RigidImpact);
            }
        }
    }
}