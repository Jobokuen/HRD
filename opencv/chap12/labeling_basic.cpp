// 12-1
// 영상의 레이블링 예제

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    uchar data[] = {
        0,0,1,1,0,0,0,0,
        1,1,1,1,0,0,1,0,
        1,1,1,1,0,0,0,0,
        0,0,0,0,0,1,1,0,
        0,0,0,1,1,1,1,0,
        0,0,0,1,0,0,1,0,
        0,0,1,1,1,1,1,0,
        0,0,0,0,0,0,0,0
    };
    
    Mat src = Mat(8,8,CV_8UC1,data)*255;
    Mat labels;

    int cnt = connectedComponents(src,labels);

    cout << "src:\n" << src << endl;
    cout << "labels:\n" << labels << endl;
    cout << "number of lables: " << cnt << endl;


    // 12-2
    // 레이블링을 이용하여 객체의 바운딩 박스 그리기

    Mat label, stats,centroids;
    int cnt2 = connectedComponentsWithStats(src, label, stats,centroids);
    cout << "stats:\n" << stats << endl;
    cout << "centroids:\n" << centroids << endl;


    return 0;
}
