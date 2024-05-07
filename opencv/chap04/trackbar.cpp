#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";
void on_level_change(int pos, void* userdata);


int main (void){

    Scalar white = Scalar(255,255,255);
    Scalar yellow = Scalar(0,255,255);
    Scalar blue = Scalar(255,0,0);
    Scalar green = Scalar(0,255,0);
    Scalar red = Scalar(0,0,255);

    Mat img(400,400,CV_8UC3,white);

    namedWindow("img");
    createTrackbar("level", "img", 0, 16, on_level_change,&img);

    imshow("img", img);
    waitKey();

    return 0;
}   

void on_level_change(int pos, void* userdata){
    Mat img = *(Mat *)userdata;
    Scalar gray = Scalar(pos * 16,128,128);
    img.setTo(gray);
    imshow("img",img);
}