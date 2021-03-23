//
//  part3.cpp
//  face detection
//
//  Created by Supreeti Kumari on 22/03/21.
//

#include "part3.hpp"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
////// resize and crop//////

//int main()
//{
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/test.png";
//    Mat img=imread(path);
//    Mat imgResize,imgCrop;
//    Rect roi(100,200,400,300);
//
//    //cout<< img.size();
//    resize(img,imgResize, Size(),0.5,0.5);
//    imgCrop=img(roi);
//    imshow("image",img);
//    imshow("image re",imgResize);
//    imshow("crop",imgCrop);
//
//    waitKey(0);
//}

