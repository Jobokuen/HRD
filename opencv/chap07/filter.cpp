// filter2D함수를 사용한 엠보싱 필터링

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "rose.bmp",IMREAD_GRAYSCALE);

    // 배열을 이용, 3X3 크기의 엠보싱 필터마스크 행렬 emboss를 실행
    float data[] = {-1,-1,0,-1,0,1,0,1,1};  
    Mat emboss(3,3,CV_32FC1, data);

    Mat dst;
    filter2D(src,dst,-1,emboss,Point(-1,-1),128);
    


    imshow("src",src);
    imshow("dst",dst);
    waitKey();
    return 0;
}