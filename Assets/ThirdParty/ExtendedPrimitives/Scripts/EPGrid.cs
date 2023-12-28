using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {

    [DefaultExecutionOrder(100)]
    [ExecuteInEditMode]
    public class EPGrid : ExtendedShape {

        public TextMeshLabelsArray VerticalLabels = new TextMeshLabelsArray();
        public TextMeshLabelsArray HorizontalLabels = new TextMeshLabelsArray();


        [A_ExpColor32("Grid color")]
        public ExpColor32 GridColor = new ExpColor32(Color.white);

        [A_ExpInt(0, 128, "X Count")]
        public ExpInt VerticalCount = 4;

        [A_ExpInt(0, 128, "Y Count")]
        public ExpInt HorizontalCount = 4;

        [A_ExpVector2("Size")]
        public ExpVector2 Size = new ExpVector2(new Vector2(3,3));

        [A_ExpFloat("Width")]
        public ExpFloat Width = 0.02f;

        [HideInInspector]
        public List<Line> verticalLines = new List<Line>();

        [HideInInspector]
        public List<Line> horizontalLines = new List<Line>();

        public override bool isTopologyChanged {
            get {
                bool result = VerticalCount.isChanged | HorizontalCount.isChanged | VerticalLabels.Enabled.isChanged | HorizontalLabels.Enabled.isChanged;
                if (points == null) {
                    result = true;
                }
                return result;
            }
        }

        public override void SetSize() {
            float xStep = verticalLines.Count > 0 ?   Size.x / (verticalLines.Count - 1) : 0;
            float yStep = horizontalLines.Count > 0 ? Size.y / (horizontalLines.Count - 1) : 0;

 

            for (int x = 0; x<verticalLines.Count; x++) {
                Line line = verticalLines[x];
                line.Width = Width;
                line.points[0].Position = new Vector3(xStep*x, 0, 0);
                line.points[1].Position = new Vector3(xStep * x, 0, Size.y);
                line.OnSizeChanged(this);
            }

            for (int y = 0; y < horizontalLines.Count; y++) {
                Line line = horizontalLines[y];
                line.Width = Width;
                line.points[0].Position = new Vector3(0, 0, yStep * y);
                line.points[1].Position = new Vector3(Size.x, 0, yStep * y);
                line.OnSizeChanged(this);
            }
        }

        public override void ApplyInherited() {
            VerticalLabels.UpdateStrings();
            HorizontalLabels.UpdateStrings();
        }

        public override bool isColorsChanged {
            get {
                return GridColor.isChanged;
            }
        }

        public override bool isLabelsChanged {
            get {
                return VerticalLabels.isParamsChanged | HorizontalLabels.isParamsChanged;
            }
        }

        public override int SplinesCount() {
            return verticalLines.Count + horizontalLines.Count;
        }

        public override void SetTopology() {
            verticalLines.Clear();
            horizontalLines.Clear();
            for (int i = 0; i < VerticalCount; i++) {
                Line line = new Line();
                line.OnTopologyChanged(this);
                verticalLines.Add(line);
            }

            for (int i = 0; i < HorizontalCount; i++) {
                Line line = new Line();
                line.OnTopologyChanged(this);
                horizontalLines.Add(line);
            }

            if (VerticalLabels.Enabled) {
                VerticalLabels.SetCount(VerticalCount, transform);
            } else {
                VerticalLabels.SetCount(0, transform);
            }

            if (HorizontalLabels.Enabled) {
                HorizontalLabels.SetCount(HorizontalCount, transform);
            } else {
                HorizontalLabels.SetCount(0, transform);
            }
        }

        public override bool isSizeChanged {
            get {
                return Size.isChanged | Width.isChanged;
            }
        }

        public override void SetColors() {
            verticalLines[0].prevPoint2.SetColorKeyable(GridColor);
        }

        public override void SetLabels() {
            float xStep = verticalLines.Count > 0 ? Size.x / (verticalLines.Count - 1) : 0;
            float zStep = horizontalLines.Count > 0 ? Size.y / (horizontalLines.Count - 1) : 0;
            for (int x = 0; x<VerticalLabels.items.Length; x++) {
                VerticalLabels.items[x].SetPositionAndSize(VerticalLabels, new Vector3(xStep * x + VerticalLabels.Offset.x, 0,  VerticalLabels.Offset.y)); 
            }
            for (int y = 0; y < HorizontalLabels.items.Length; y++) {
                HorizontalLabels.items[y].SetPositionAndSize(HorizontalLabels, new Vector3(HorizontalLabels.Offset.x, 0, zStep * y + HorizontalLabels.Offset.y));
            }
 
        }

        public override IEnumerable<Spline> Splines() {
            for (int i = 0; i < verticalLines.Count; i++) {
                yield return verticalLines[i];
            }

            for (int i = 0; i < horizontalLines.Count; i++) {
                yield return horizontalLines[i];
            }
        }


        public static EPGrid Create() {
            GameObject go = new GameObject("New Grid");
            EPGrid result = go.AddComponent<EPGrid>();
            result.Apply();
            return result;
        }
    }
}

