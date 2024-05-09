// 10-1
// 컬러 영상의 픽셀 값 반전

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"butterfly.jpg",IMREAD_COLOR);

    Mat dst(src.rows, src.cols, src.type());

    for (int i = 0; i < src.rows; i++)
    {
        for (int j = 0; j < src.cols; j++)
        {
            Vec3b& p1 = src.at<Vec3b>(i,j);        
            Vec3b& p2 = dst.at<Vec3b>(i,j);

            p2[0] = 255 - p1[0];
            p2[1] = 255 - p1[1];
            p2[2] = 255 - p1[2];
        }
        
    }

    imshow("src",src);
    imshow("dst",dst);
    

    waitKey(0);
    destroyAllWindows();

    return 0;
}
