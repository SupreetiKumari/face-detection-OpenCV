//
//  part6.cpp
//  face detection
//
//  Created by Supreeti Kumari on 23/03/21.
//

#include "part6.hpp"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

//////// colour detection///////
//int main()
//
//{
//    int hmin = 0, smin = 0, vmin = 0;
//    int hmax = 19, smax = 240, vmax = 255;
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/lambo.png";
//    Mat imgHSV,mask;
//
//    Mat img = imread(path);
//    cvtColor(img,imgHSV,COLOR_BGR2HSV);
//    namedWindow("Trackbars", (640, 200));
//    createTrackbar("hue min","Trackbars",&hmin,179);
//    createTrackbar("hue max","Trackbars",&hmax,179);
//    createTrackbar("sat min","Trackbars",&smin,255);
//    createTrackbar("sat max","Trackbars",&smax,255);
//    createTrackbar("val min","Trackbars",&vmin,255);
//    createTrackbar("val max","Trackbars",&vmax,255);
//
//    while(true)
//    {
//    Scalar lower(hmin, smin, vmin);
//    Scalar upper(hmax, smax, vmax);
//    inRange(imgHSV, lower, upper, mask);
//
//    imshow("image",img);
//    imshow("image mask",mask);
//    waitKey(1);
//
//    }}
