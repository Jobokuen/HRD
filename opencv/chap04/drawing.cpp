#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat img(400,640,CV_8UC3,Scalar(255,255,255));
    int a = 0;
    while(true){
        img = Scalar(255,255,255);
        line(img, Point(50+a,100-a), Point(300,200), Scalar(255,0,0), 3,LINE_AA);
        imshow("img",img);
        if(waitKey(30) == 27) break;
        a++;
    }
    destroyAllWindows();
    return 0;
}