// 영상의 이동 변환

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"tekapo.bmp");

    // 가로를 150픽셀, 세로로 100픽셀 이동하는 어파인 변환 행렬 M을 생성합니다.
    Mat M = Mat_<double>({2,3},{1,0,150,0,1,100});

    // src영상을 이동 변환하여 dst영상을 생성합니다. dst영상 크기는 src영상과 같게 설정하였습니다.
    Mat dst;
    warpAffine(src,dst,M,Size());
    

    imshow("src",src);
    imshow("dst",dst);

    waitKey();
    destroyAllWindows();


    return 0;
}