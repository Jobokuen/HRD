#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";



int main (void){

    Scalar white = Scalar(255,255,255);
    Scalar yellow = Scalar(0,255,255);
    Scalar blue = Scalar(255,0,0);
    Scalar green = Scalar(0,255,0);
    Scalar red = Scalar(0,0,255);
    
    Mat img(500,800,CV_8UC3,white);

    putText(img, "FONT_HERSHEY_SIMPLEX", Point(20,50), FONT_HERSHEY_SIMPLEX,1,green);
    putText(img, "FONT_HERSHEY_PLAIN", Point(20,100), FONT_HERSHEY_PLAIN,3,blue);

    
    
    imshow("img", img);
    waitKey();

    return 0;
}   
