// 가우시안 잡음 추가 예제 코드

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "lenna.bmp",IMREAD_GRAYSCALE);
    // noise 생성
    Mat noise(src.size(),CV_32SC1);
    int stddev = 10;
    randn(noise,0,stddev);

    Mat dst;
    // Mat dst = src + noise; > 호환이 맞지 않아 성립할 수 없음
    add(src,noise, dst, Mat(),CV_8U);
    
    imshow("src",src);
    imshow("dst",dst);
    waitKey();
    destroyAllWindows();
    return 0;
}