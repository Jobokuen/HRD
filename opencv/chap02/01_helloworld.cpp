#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){

    cout << "hello, world!" << endl;
    Mat img;
    img = imread(folder + "lenna.bmp");      // image in memory 
    imshow("image",img);        // name:image, 객체:img
    waitKey(0);

    return 0;
}   