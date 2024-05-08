// 영상의 진단 변환

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"tekapo.bmp");

    double mx = 0.3;
    Mat M = Mat_<double>({2,3},{1,mx,0,0,1,0});

    
    Mat dst;
    // 행렬 M을 이용하여 어파인 변환을 수행합니다.
    // 전단 변환에 의해 입력 영상의 일부가 잘리지 않도록 결과 영상 가로 크기를 cvRound(src.cols + src.rows* mx)형태로 지정하였습니다.
    warpAffine(src,dst,M,Size(cvRound(src.cols+src.rows*mx), src.rows));
    

    imshow("src",src);
    imshow("dst",dst);

    waitKey();
    destroyAllWindows();


    return 0;
}