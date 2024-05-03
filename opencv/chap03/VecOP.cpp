#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){
    Vec3b p1, p2(0,0,255);
    p1[0] = 255;
    cout<< "p1: " << p1 << endl;
    cout<< "p2: " << p2 << endl;

    //Scolar
    Scalar gray = 128;
    cout << "gray: " << gray << endl;
    Scalar yellow(0,255,255);
    Scalar pink(255,0,255);
    cout << "yellow: " << yellow << endl;

    Mat img1(400,400, CV_8UC3, pink);
    Mat img2(400,400, CV_8UC1, gray);
    Mat img3(400,400, CV_8UC3, yellow);

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    waitKey(0);


    return 0;
}   
