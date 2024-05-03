#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){
    //ptr 예제
    Mat mat1 = Mat::zeros(3,4,CV_8UC1);
    cout << "Before mat1: " << mat1 << endl;
    for (int i = 0; i < mat1.rows; i++){
        for (int j = 0; j < mat1.cols; j++){
            mat1.at<uchar>(i,j)++;
        }
    }
    cout << "After mat1: " << mat1 << endl;


    for (int i = 0; i < mat1.rows; i++){
    uchar* p = mat1.ptr<uchar>(i);
    for (int j = 0; j < mat1.cols; j++){
    p[j]++;
    }
    }

    cout << "Second mat1: " << mat1 << endl;

    for( auto it = mat1.begin<uchar>(); it != mat1.end<uchar>(); it++){
        (*it)++;
    }
    cout << "Three mat1: " << mat1 << endl;

    return 0;
}   