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
    
    Mat img(400,400,CV_8UC3,white);

    line(img,Point(50,50), Point(200,50), red);             //default
    line(img,Point(50,100), Point(200,100), yellow,3);      //thickness
    line(img,Point(50,150), Point(200,150), green,10);      //thickness

    line(img, Point(250,50),Point(350,100), red, 1, LINE_4);
    line(img, Point(250,70),Point(350,120), yellow, 1, LINE_8);
    line(img, Point(250,90),Point(350,140), blue, 1, LINE_AA);

    arrowedLine(img, Point(50,200),Point(150,200), red, 1);
    arrowedLine(img, Point(50,250),Point(350,250), yellow, 1);
    arrowedLine(img, Point(50,300),Point(350,300), green, 1, LINE_8,0,0.05);

    drawMarker(img, Point(50,350),red,MARKER_CROSS);
    drawMarker(img, Point(100,350),red,MARKER_TILTED_CROSS);
    drawMarker(img, Point(150,350),red,MARKER_STAR);
    drawMarker(img, Point(200,350),red,MARKER_DIAMOND);
    drawMarker(img, Point(250,350),red,MARKER_SQUARE);
    drawMarker(img, Point(300,350),red,MARKER_TRIANGLE_UP);
    drawMarker(img, Point(350,350),red,MARKER_TRIANGLE_DOWN);
    
    imshow("img", img);
    waitKey();

    return 0;
}   
