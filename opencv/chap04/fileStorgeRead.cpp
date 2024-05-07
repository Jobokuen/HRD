#include"opencv2/opencv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    String name = "Jane";
    int age;
    Point pt1;
    vector<int> v;
    Mat mat1;

    FileStorage fs;
    fs.open(folder + "mydata.json",FileStorage::READ);
    if(!fs.isOpened()){
        cerr << "File open failed" << endl;
        return 1;
    }

    fs["name"] >> name;
    fs["age"] >> age;
    fs["pt1"] >> pt1;
    fs["v"] >> v;
    fs["mat1"] >> mat1;

    fs.release();       // 저장

    cout<<"name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "point: " << pt1 << endl;
    cout << "v: ("; 
    for(auto i : v){            // range for문 > 콜론 뒤쪽에 백터를 넣을 시 안쪽에 있는 요소가 하나씩 읽어서 변수 값에 집어넣는다.
        cout << i << " ";       // == for(int i=0;i<v.size();i++)
    }
    cout << " )" << endl;
    cout << "mat1: " << mat1 << endl;
    return 0;
}