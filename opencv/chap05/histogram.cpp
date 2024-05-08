// 히스토그램 스트레칭
// 함수 따로 제공하지 아니하며, 기본적인 산술연산으로 연산자 재정의
#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

Mat calcGrayHist(const Mat& img){

    CV_Assert(img.type() == CV_8UC1);

    Mat hist;
    int channels[] =  {0};              // 입력 영상 개수
    int dims = 1;                       // 출력 히스토그램의 차원 수
    const int histSize[] = {256};       // 각 차원의 히스토그램 배열 크기를 나타내는 배열
    float graylevel[] = {0,256};        // range 배열의 요소(최솟값, 최대값)
    const float* range[] = {graylevel}; // 각차원의 히스토그램 범위

    calcHist(&img, 1, channels, noArray(), hist, dims, histSize,range);

    return hist;
}

Mat getGrayHistImage(const Mat& hist){
    CV_Assert(hist.type() == CV_32FC1);
    CV_Assert(hist.size() == Size(1,256));

    double histMax;
    minMaxLoc(hist, 0, &histMax);

    // histogram Graph
    Mat imgHist(100,256,CV_8UC1, Scalar(255));
    for(int i=0;i<256;++i){
        line(imgHist,Point(i,100),
            Point(i, 100 - cvRound(hist.at<float>(i,0)*100/histMax)),Scalar(0));
    }
    return imgHist;
}

int main(void){

    Mat src = imread(folder+"hawkes.bmp",IMREAD_GRAYSCALE);
    double gmin, gmax;
    minMaxLoc(src, &gmin, &gmax);

    //histogram stretching
    Mat dst = (src - gmin) * 255 / (gmax-gmin);

    imshow("src",src);
    imshow("srcHist", getGrayHistImage(calcGrayHist(src)));
    imshow("dst",dst);

    waitKey(0);
    destroyAllWindows();

    return 0;
}