// 영상의 어파인 변환 예제

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"tekapo.bmp");


    // 입력영상과 출력영상에서의 세 점 좌표를 저장할 srcPts와 dstPts배열을 선언합니다.
    Point2f srcPts[3], dstPts[3];
    //srcPts의 세점
    srcPts[0] = Point2f(0,0);
    srcPts[1] = Point2f(src.cols -1,0);
    srcPts[2] = Point2f(src.cols -1,src.rows-1);
    //dstPts의 세점
    dstPts[0] = Point2f(50,50);
    dstPts[1] = Point2f(src.cols -100,100);
    dstPts[2] = Point2f(src.cols -50,src.rows-50);

    // 2X3 어파인 변환 행렬을 M에 저장합니다.
    Mat M = getAffineTransform(srcPts,dstPts);


    // 어파인 변환 행렬 M을 이용하여 어파인 변환하고 dst에 저장합니다.
    Mat dst;
    warpAffine(src,dst,M,Size());   //네 번째 인자Size()를 지정하여 dst영상크기와 src영상크기가 같도록 설정

    imshow("src",src);
    imshow("dst",dst);

    waitKey();
    destroyAllWindows();


    return 0;
}