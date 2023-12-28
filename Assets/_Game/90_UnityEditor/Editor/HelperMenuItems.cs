using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace Library.EditorTools.Editor
{
    public class HelperMenuItems : UnityEditor.Editor
    {
        [MenuItem("Craft Games/Delete Player Prefs")]
        public static void DeletePlayerPrefs()
        {
            PlayerPrefs.DeleteAll();
        }
        
        [MenuItem("Craft Games/Sort Object Alphabetically")]
        public static void SortObjectAlphabetically()
        {
            List<GameObject> selectedObjects = Selection.gameObjects.ToList();
            selectedObjects = selectedObjects.OrderBy(gameObject => gameObject.name).ToList();
            for (int i = 0; i < selectedObjects.Count; i++)
            {
                selectedObjects[i].transform.SetSiblingIndex(i);
                EditorUtility.SetDirty(selectedObjects[i].gameObject);
            }
        }
    }
}