using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeMover : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (FaceDetector.NormalizedFacePositions.Count == 0)
            return;

        transform.position = Camera.main.ViewportToWorldPoint(new Vector3(
            FaceDetector.NormalizedFacePositions[0].x, 
            FaceDetector.NormalizedFacePositions[0].y, 
            FaceDetector.NormalizedFacePositions[0].z));
    }
}
