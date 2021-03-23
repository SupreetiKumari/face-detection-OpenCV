//
//  part5.cpp
//  face detection
//
//  Created by Supreeti Kumari on 23/03/21.
//

#include "part5.hpp"
#include "part4.hpp"
#include "part3.hpp"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

////////// warp/////////

//int main()
//{
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/cards.jpg";
//    Mat matrix, imgWarp;
//    float w = 250, h = 350;
//    Mat img = imread(path);
//    Point2f src[4] = { {529,142},{771,190},{405,395},{674,457} };
//    Point2f dst[4] = { {0.0f,0.0f},{250,0.0f},{0.0f,h},{250,h} };
//
//    matrix = getPerspectiveTransform(src, dst);
//    warpPerspective(img, imgWarp, matrix, Point(w, h));
//    
//    imshow("image",imgWarp);
//    waitKey(0);
//    return 0;
//}
