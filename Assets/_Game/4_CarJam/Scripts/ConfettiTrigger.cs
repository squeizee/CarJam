using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class ConfettiTrigger : MonoBehaviour
    {
        [SerializeField] private EnvironmentController _environmentController;

        private void OnTriggerEnter(Collider other)
        {
            Debug.Log($"other.gameObject.tag: {other.tag}");

            if (other.CompareTag("CollidedObject"))
            {
                _environmentController.PlayParticles();
            }
        }
    }
}