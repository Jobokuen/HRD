// 12-4
// 계층 구조를 사용ㅎ는 외곽선 검출과 그리기

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
    vector<Vec4i> hierarchy;
    findContours(src,contours,hierarchy,RETR_CCOMP,CHAIN_APPROX_SIMPLE);
    
    Mat dst;
    cvtColor(src,dst,COLOR_GRAY2BGR);
    for (int idx = 0; idx >= 0; idx = hierarchy[idx][0])
    {
        Scalar c (rand()&255, rand()&255,rand()&255);
        drawContours(dst,contours,idx,c,2,LINE_8,hierarchy);
    }
    
    for(auto h : hierarchy){
        cout << h << endl;
    }
    
    imshow("src",src);
    imshow("dst",dst);
    waitKey(0);

    return 0;
}
