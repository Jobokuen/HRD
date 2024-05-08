// edge-preserving noise removal filter 예제 코드

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "lenna.bmp",IMREAD_GRAYSCALE);
    // noise 생성
    Mat noise(src.size(),CV_32SC1);
    int stddev = 5;
    randn(noise,0,stddev);

    Mat dst1;
    GaussianBlur(src,dst1,Size(),stddev);

    Mat dst2;
    bilateralFilter(src,dst2,-1,10,5);

    imshow("src",src);
    imshow("dst1",dst1);
    imshow("dst2",dst2);
    waitKey();
    destroyAllWindows();
    return 0;
}