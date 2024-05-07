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
    cout << "sum: "<< sum(img)[2]<<endl;
    cout << "sum: "<< sum(img)[0]<<endl;
    cout << "sum: "<< sum(img)[1]<<endl;

    double minVal, maxVal;
    Point minLoc, maxLoc;
    minMaxLoc(img,&minVal,&maxVal,&minLoc,&maxLoc);
    cout <<"minVal : " << minVal << endl;
    cout <<"maxVal : " << maxVal << endl;
    cout <<"minLoc : " << minLoc << endl;
    cout <<"maxLoc : " << maxLoc << endl;


    Mat src = Mat_<float>({1,5},{-1.f,-0.5f,0.f,0.5f,1.f});
    Mat dst;
    normalize(src, dst,0,255,NORM_MINMAX,CV_8UC1);
    imshow("img",img);
    waitKey(0);
    destroyAllWindows();
    
    return 0;
}