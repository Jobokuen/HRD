// 9-3
// 허프변환 직선 검출 예제

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"building.jpg",IMREAD_GRAYSCALE);

    Mat edge;
    Canny(src,edge, 50,150);

    vector<Vec2f> lines;
    HoughLines(edge,lines,1,CV_PI/180,250);

    Mat dst;
    // 그레이스케일 에지 영상 edge를 BGR3채널 영상으로 변환하여 dst에 저장
    cvtColor(edge,dst, COLOR_GRAY2BGR);

    

    imshow("src",src);
    imshow("edge",edge);
    imshow("dst1",dst);

    waitKey(0);
    destroyAllWindows();

    return 0;
}
