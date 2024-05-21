#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    String name = "Jane";
    int age = 10;
    Point pt1(100,200);
    vector<int> v = {74,98,29};
    Mat mat1 = (Mat_<int>(2,2) << 1,2,3,4);

    FileStorage fs;
    fs.open(folder + "mydata.json",FileStorage::WRITE);
    if(!fs.isOpened()){
        cerr << "File open failed" << endl;
        return 1;
    }

    fs << "name" << name;
    fs << "age" << age;
    fs << "pt1" << pt1;
    fs << "v" << v;
    fs << "mat1" << mat1;

    fs.release();       // 저장
    return 0;
}