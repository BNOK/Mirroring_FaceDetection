using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeMover : MonoBehaviour
{
    public Vector3 pos;
    public float xSpeed;
    public float ySpeed;
    public float zSpeed;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (FaceDetector.NormalizedFacePositions.Count == 0)
            return;
        pos.x = FaceDetector.NormalizedFacePositions[0].x * xSpeed;
        pos.y = FaceDetector.NormalizedFacePositions[0].y * ySpeed;
        pos.z = FaceDetector.NormalizedFacePositions[0].z * zSpeed;

        transform.position = pos;
        //transform.position = Camera.main.ViewportToWorldPoint(new Vector3(
        //    FaceDetector.NormalizedFacePositions[0].x, 
        //    FaceDetector.NormalizedFacePositions[0].y, 
        //    FaceDetector.NormalizedFacePositions[0].z));

        
    }
}
