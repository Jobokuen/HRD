// 11-4
// 이전 영상의 열기와 닫기 예제 프로그램

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"milkdrop.bmp",IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "Image load failed" << endl;
        return -1;
    }

    Mat bin;
    threshold(src,bin,0,255,THRESH_BINARY | THRESH_OTSU);

    Mat dst1, dst2;
    morphologyEx(bin,dst1,MORPH_OPEN,Mat());
    morphologyEx(bin,dst2,MORPH_CLOSE,Mat());

    imshow("src",src);
    imshow("bin",bin);
    imshow("dst1",dst1);
    imshow("dst2",dst2);

    waitKey(0);
    destroyAllWindows();

    return 0;
}
