//#include <opencv2/objdetect.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
#include "pch.h"
//
//
//using namespace std;
//using namespace cv;
//
////global variables
//CascadeClassifier _FaceCascade;
//VideoCapture _Capture;
//int _scale = 0;
//
//
//struct Circle
//{
//	int x = 0, y = 0, radius = 0;
//	Circle(int x, int y, int radius) {
//		x = x;
//		y = y;
//		radius = radius;
//	}
//};
//
// int StartStream(int& camerawidth, int& cameraheight, string& cascadepath) {
//
//	// load haar face cascade.
//	if (!_FaceCascade.load(cascadepath))
//		return -1;
//
//	// open the stream.
//	_Capture.open(0);
//	if (!_Capture.isOpened())
//		return -2;
//
//	camerawidth = _Capture.get(CAP_PROP_FRAME_WIDTH);
//	cameraheight = _Capture.get(CAP_PROP_FRAME_HEIGHT);
//
//	return 0;
//}
//
//
//void SetScale(int scale)
//{
//	_scale = scale;
//}
//
//void __stdcall  Close()
//{
//	_Capture.release();
//}
//
//
//void DetectFace(Circle* outfaces, int maxoutfacescount, int& outdetectedfacescount)
//{
//
//
//	Mat frame;
//	_Capture >> frame;
//	if (frame.empty())
//		return;
//
//	Mat gray, smallimg;
//
//	cvtColor(frame, gray, COLOR_BGR2GRAY); // convert to gray scale
//
//	// resize the grayscale image 
//	resize(gray, smallimg, Size(), frame.cols / _scale, frame.rows / _scale, INTER_LINEAR);
//	equalizeHist(smallimg, smallimg);
//
//	vector<Rect> faces;
//
//	// detect faces of different sizes using cascade classifier 
//	_FaceCascade.detectMultiScale(smallimg, faces, 1.1,
//		2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
//
//
//	// draw faces.
//	for (size_t i = 0; i < faces.size(); i++)
//	{
//		Point center(_scale * (faces[i].x + faces[i].width / 2), _scale * (faces[i].y + faces[i].height / 2));
//		ellipse(frame, center, Size(_scale * faces[i].width / 2, _scale * faces[i].height / 2), 0, 0, 360, Scalar(0, 0, 255), 4, 8, 0);
//
//		// send to application.
//		outfaces[i] = Circle(faces[i].x, faces[i].y, faces[i].width / 2);
//		outdetectedfacescount++;
//
//		if (outdetectedfacescount == maxoutfacescount)
//			break;
//	}
//
//	imshow("face detection", frame);
//}