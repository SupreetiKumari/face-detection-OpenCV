//
//  part1.cpp
//  face detection
//
//  Created by Supreeti Kumari on 22/03/21.
//

#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

///summary
////importing images

//int main()
//{
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/test.png";
//    Mat img = imread(path);
//    imshow("image",img);
//    waitKey(0);
//    return 0;
//}

///video

//int main()
//{
//    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/test_video.mp4";
//    VideoCapture cap(path);
//    Mat img ;
//
//    while(true)
//    {
//        cap.read(img);
//        imshow("Image",img);
//        waitKey(20);
//
//    }return 0;
//
//}
           
//webcam

//int main()
//{
//
//    VideoCapture cap(0);
//    Mat img ;
//
//    while(true)
//    {
//        cap.read(img);
//        imshow("Image",img);
//        waitKey(1);
//
//    }return 0;
//
//}
