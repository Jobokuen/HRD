// 9-1
// 소벨 마스크 기반 예지 검출 예제

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"lenna.bmp",IMREAD_GRAYSCALE);

    // x축 방향으로 1차 변미분, y축 방향으로 1차 편미분을 각각 구하여 dx와 dy행렬에 저장합니다.
    // dx와 dy행렬은 float 자료형을 사용하도록 설정하였습니다.
    Mat dx,dy;
    Sobel(src, dx, CV_32FC1, 1, 0);
    Sobel(src, dy, CV_32FC1, 0, 1);


    // dx와 dy행렬으로부터 그래디언트 크기를 계산하여 fmag에 저장합니다.
    // dx와 dy가 모두 float 자료형을 사용하므로 fmag도 float 자료형을 사용하는 행렬로 생성됩니다.
    Mat fmag, mag;
    magnitude(dx,dy,fmag);

    // 실수형 행렬 fmag를 그레이스케일 형식으로 변환하여 mag에 저장합니다.
    fmag.convertTo(mag, CV_8UC1);

    // 에지 판별을 위한 그래디언트 크기 임계값을 150으로 설정하여 에지를 판별합니다.
    // 행렬 edge의 원소값은 mag행렬 원소 값이 150보다 크면 255로, 작으면 0으로 설정됩니다.
    Mat edge = mag > 150;

    imshow("src",src);
    imshow("mag",mag);
    imshow("edge",edge);

    waitKey(0);
    destroyAllWindows();

    return 0;
}