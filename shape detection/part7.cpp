//
//  part7.cpp
//  face detection
//
//  Created by Supreeti Kumari on 23/03/21.
//

#include "part7.hpp"

#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

///summary
//// shape/contour detection for circles,squares,rectangles

//void getContours(Mat imgDil, Mat img) {
//
//vector<vector<Point>> contours;
//vector<Vec4i> hierarchy;
//
//findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
//    //drawContours(img, contours, -1, Scalar(255, 0, 255), 40);
//
//    vector<vector<Point>> conPoly(contours.size());
//    vector<Rect> boundRect(contours.size());
//    for (int i = 0; i < contours.size(); i++)
//    {
//    int area = contourArea(contours[i]);
//            if (area > 2000)
//            {
//            float peri = arcLength(contours[i], false);
//            approxPolyDP(contours[i], conPoly[i], 0.02 * peri, false);
//            drawContours(img, conPoly, i, Scalar(255, 0, 255), 15);
////         boundRect[i] = boundingRect(conPoly[i]);
////         rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
//            }
//    }
//}
//
//int main(){
//
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/test.png";
//    Mat img,imgGray,imgBlur,imgCanny,imgDil,imgErode;
//     img = imread(path);
//
//       cvtColor(img,imgGray,COLOR_BGR2GRAY);
//       GaussianBlur(img, imgBlur, Size(5,5),3,0);
//       Canny(imgBlur, imgCanny, 25,75);
//       Mat kernel=getStructuringElement(MORPH_RECT,Size(2,2));
//       dilate(imgCanny, imgDil,kernel);
//
//    getContours(imgDil,img);
//    imshow("image",img);
//    waitKey(0);
//    return 0;
//}
