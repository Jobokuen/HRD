#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src1 = imread(folder + "lenna256.bmp",IMREAD_GRAYSCALE);
    Mat src2 = imread(folder + "square.bmp",IMREAD_GRAYSCALE);

    imshow("src1",src1);
    imshow("src2",src2);

    Mat dst1, dst2, dst3, dst4;

    bitwise_and(src1,src2,dst1);
    bitwise_or(src1,src2,dst2);
    bitwise_xor(src1,src2,dst3);
    bitwise_not(src1,dst4);

    imshow("dst1",dst1);
    imshow("dst2",dst2);
    imshow("dst3",dst3);
    imshow("dst4",dst4);

    waitKey();
    return 0;
}