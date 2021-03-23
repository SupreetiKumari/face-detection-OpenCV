//
//  part2.cpp
//  face detection
//
//  Created by Supreeti Kumari on 22/03/21.
//

#include "part2.hpp"

#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

///summary
////importing images
///////////basic function///////////////////
////int main()
//{
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/test.png";
//    Mat img = imread(path);
//    Mat imgGray,imgBlur,imgCanny,imgDil,imgErode;
//
//    cvtColor(img,imgGray,COLOR_BGR2GRAY);
//    GaussianBlur(img, imgBlur, Size(5,5),3,0);
//    Canny(imgBlur, imgCanny, 25,75);
//
//    Mat kernel=getStructuringElement(MORPH_RECT,Size(2,2));
//    dilate(imgCanny, imgDil,kernel);
//    erode(imgDil,imgErode,kernel);
//
//    imshow("image canny",imgCanny);
//    imshow("Image dilation",imgDil);
//    imshow("image ero",imgErode);
//
//    waitKey(0);
//    return 0;
//}
