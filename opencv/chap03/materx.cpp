#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){
   //mat 예제
   Mat img1;
   img1 = Scalar(10,0,0);
   Mat img2(400,640,CV_8UC1);   // 흑백
   Mat img3(400,640,CV_8UC3);   // 칼라
   Mat img3(Size(400,640),CV_8UC3);

   Mat img5(400,640,CV_8UC1,Scalar(0));       // 검은색
   Mat img6(400,640,CV_8UC1,Scalar(255));     // white


    return 0;
}   