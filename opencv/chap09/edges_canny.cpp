// 9-1
// 소벨 마스크 기반 예지 검출 예제

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"lenna.bmp",IMREAD_GRAYSCALE);

    Mat dst1, dst2;

    Canny(src, dst1, 50 ,100);
    Canny(src, dst2, 50 ,150);
    imshow("src",src);
    imshow("dst1",dst1);
    imshow("dst2",dst2);

    waitKey(0);
    destroyAllWindows();

    return 0;
}