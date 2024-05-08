// 영상의 명암비 조절

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main(void){

    Mat img1 = imread(folder+"lenna.bmp",IMREAD_GRAYSCALE);
    Mat original = img1.clone();
    Mat img2 = img1.clone();
 
    // 명암비 증가(곱하기)
    img1 = img1 * 2.0;

    // 효과적인 명암비 조절방법
    img2 = img2 + (img2 - 128)*1.f;

    // cout << "original mean: " << mean(original) << endl;
    imshow("img1", img1);
    imshow("img2", img2);
    imshow("original", original);
    waitKey(0);
    destroyAllWindows();

    return 0;
}