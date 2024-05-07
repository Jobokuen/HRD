#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){

    Mat img1 = imread(folder+"lenna.bmp",IMREAD_COLOR);
    Mat gray, addgray;
    cvtColor(img1, gray, COLOR_BGR2GRAY);   // 그레이스케일 영상 변환
    add(gray, 50,addgray);                  // 밝기 조절(+50)
    // 포화연산이 포함되어 있는 수식 다음 장에 포함되어 있지 않은 코드 작성
    imshow("img1",img1);
    imshow("gray",gray);
    imshow("addgray",addgray);

    

    waitKey(0);

    return 0;
}