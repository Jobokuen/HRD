// 12-3
// 외곽선 검출과 그리기

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"contours.bmp",IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "Image load failed" << endl;
    }

    vector<vector<Point> > contours;
    findContours(src,contours,RETR_LIST,CHAIN_APPROX_NONE);

    // cout << contours.size() << endl;
    // for(auto contour : contours){
    //     cout << contour.size() << "....................................................." <<endl;
    //     for(auto point : contour){
    //         cout << point << ", " << endl;
    //     }
    // }

    
    
    Mat dst;
    cvtColor(src,dst,COLOR_GRAY2BGR);
    drawContours(dst,contours,1,Scalar(0,255,255),10);
    
    imshow("src",src);
    imshow("dst",dst);
    waitKey(0);

    return 0;
}
