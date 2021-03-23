//
//  part8.cpp
//  face detection
//
//  Created by Supreeti Kumari on 23/03/21.
//

#include "part8.hpp"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

///summary
//// face detection

int main()
{
    string path="/Users/supreetikumari/Desktop/face detection/face detection/Resources/sii.png";
    Mat img = imread(path);
    
    CascadeClassifier faceCascade;
    faceCascade.load("/Users/supreetikumari/Desktop/face detection/face detection/Resources/haarcascade_frontalface_default.xml");
    
    if(!faceCascade.empty()) cout<<"not empty";
    vector<Rect> faces;
    faceCascade.detectMultiScale(img,faces,1.1,2);
    for( int i=0;i<faces.size();i++)
    {
        rectangle(img,faces[i].tl(),faces[i].br(),Scalar(255,0,0),3);
    }
    imshow("image",img);
    waitKey(0);
    return 0;
}
