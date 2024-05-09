// 10-3
// 컬러 영상의 채널 나누기

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){    
    Mat src = imread(folder+"candies.png");

    vector<Mat> bgr_planes;
    split(src, bgr_planes);    

    imshow("src",src);
    imshow("bgr_planes[0]",bgr_planes[0]);
    imshow("bgr_planes[1]",bgr_planes[1]);
    imshow("bgr_planes[2]",bgr_planes[2]);
    

    waitKey(0);
    destroyAllWindows();

    return 0;
}
