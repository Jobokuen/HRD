// 트렉바를 이용한 영상의 밝기 조절

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

void on_brightness(int pos, void* userdata);

int main(void){

    Mat img1 = imread(folder+"lenna.bmp",IMREAD_GRAYSCALE);
    int position = 256;
    namedWindow("img");

    // 트랙바 제작
    createTrackbar("Brightness", "img", &position , 511, on_brightness, (void*)&img1);
    imshow("img1",img1);
    on_brightness(position,&img1);

    waitKey(0);
    destroyAllWindows();

    return 0;
}


void on_brightness(int pos, void* userdata){
    Mat img = *(Mat *)userdata;
    Mat dst = img + pos - 256;      // 밝기를 완전히 어둡게 할 수 있겠금
    imshow("img",dst);
}