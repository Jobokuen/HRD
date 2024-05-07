#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){

    Mat img1 = imread(folder+"lenna.bmp",IMREAD_GRAYSCALE);
    Mat brightSrc, brightSrc2;
    brightSrc = img1.clone();       // 복사
    brightSrc2 = img1.clone();

    // 포화 연산을 포함하지 않은 코딩
    for(auto it = brightSrc.begin<char>(); it != brightSrc.end<char>(); it++){
        *it = *it + 100;
    }

    // 포화 연산을 포함한 코딩
    for(auto it = brightSrc2.begin<uchar>(); it != brightSrc2.end<uchar>(); it++){
        *it = saturate_cast<uchar>(*it + 100);
    }
    
    imshow("img1",img1);
    imshow("brightSrc",brightSrc);
    imshow("brightSrc2",brightSrc2);

    waitKey(0);
    destroyAllWindows();

    return 0;
}