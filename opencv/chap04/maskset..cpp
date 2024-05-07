#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){

    Scalar white = Scalar(255,255,255);
    Scalar yellow = Scalar(0,255,255);
    Scalar blue = Scalar(255,0,0);
    Scalar green = Scalar(0,255,0);
    Scalar red = Scalar(0,0,255);
    
    Mat img = imread(folder + "lenna.bmp", IMREAD_COLOR);
    Mat mask = imread(folder + "mask_smile.bmp", IMREAD_GRAYSCALE);
    Mat airplainImg = imread(folder + "airplane.bmp", IMREAD_COLOR);
    Mat filedImg = imread(folder + " field.bmp", IMREAD_COLOR);
    Mat mask2 = imread(folder+"mask_plane.bmp", IMREAD_GRAYSCALE);

    airplainImg.copyTo(filedImg,mask2);

    img.setTo(yellow, mask);
    imshow("img",img);
    imshow("fieldImg",filedImg);
    waitKey(0);
    destroyAllWindows();
    
    return 0;
}