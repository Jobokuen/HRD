// 11-1
// 트랙바를 이용한 이진화 예제 프로그램

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

void on_threshold(int pos, void* userdata);

int main(int argc, char* argv[]){
    Mat src ;
    if(argc < 2){
        src = imread(folder+"neuthrophils.png",IMREAD_GRAYSCALE);
    }else if(argc == 2){
        src = imread(folder + argv[1], IMREAD_GRAYSCALE);
    }else{
        cerr << "please cheaking dir" << endl;
    }

    if(src.empty()){
        cerr << "Image load failed" << endl;
    }

    imshow("src",src);

    namedWindow();
    createTrackbar("threshold","dst", 0,255,on_threshold,(void*)&src);
    setTrackbarMax("threshold","dst",128);

    waitKey(0);
    return 0;
}

void on_threshold(int pos, void* userdata){
    Mat src = *(Mat*)userdata;

    Mat dst;
    threshold(src,dst,pos,255,THRESH_BINARY);
    imshow("dst",dst);

}