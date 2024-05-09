// 10-5
// inRange() 함수를 이용한 특정 색상 영역 분할

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"candies.png");

    int lowerHue = 40;
    int upperHue = 80;

    cvtColor(src,src,COLOR_BGR2HSV);

    imshow("src",src);

    createTrackbar("Lower bar","dst",&lowerHue,179);
    createTrackbar("Upper bar","dst",&upperHue,179);
    while ((true))
    {
        Mat dst;
        inRange(src, Scalar(Lower,Upper, ))
        imshow("dst",dst);
    }
    

    waitKey(0);
    destroyAllWindows();

    return 0;
}
