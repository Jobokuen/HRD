#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){
   //Rect 예제
   Mat img1 = imread(folder + "cat.bmp");

   Rect roi(220,120,200,200);
   Mat img2 = (img1(roi));
   Mat img3 = img1(roi).clone();

    img2 = ~img2;
    img1.setTo(Scalar(0,0,0));

   imshow("img1", img1);
   imshow("img2", img2);
   imshow("img3", img3);
   waitKey(0);

    return 0;
}   