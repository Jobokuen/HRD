// 12-2
// 레이블링을 이용하여 객체의 바운딩 박스 그리기

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"keyboard.bmp",IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "Image load failed" << endl;
    }

    Mat bin;
    threshold(src,bin,0,255,THRESH_BINARY|THRESH_OTSU);
    
    // morphologyEx(bin,bin,MORPH_OPEN,Mat(), Point(-1,-1),1);
    
    Mat labels, stats, centroids;
    int cnt = connectedComponentsWithStats(bin,labels,stats,centroids);

    Mat dst;
    cvtColor(src,dst,COLOR_GRAY2BGR);

    for (int i = 0; i < cnt; i++)
    {
        int* p = stats.ptr<int>(i);

        if(p[4]<20) continue;

        rectangle(dst,Rect(p[0],p[1],p[2],p[3]),Scalar(0,255,255),2);
    }

    imshow("bin",bin);
    imshow("dst",dst);
    waitKey(0);
    destroyAllWindows();

    return 0;
}
