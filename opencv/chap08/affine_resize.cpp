// 영상의 진단 변환
// core dumped가 나오니 수정 필요.

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder+"rose.bmp");

    Mat dst1, dst2, dst3, dst4;
    // src영상을 x방향으로 4배, y방향으로 4배 확대하여 dst1을 생성합니다.
    // src영상의 크기가 480X320이므로 결과 양상 dst1의 크기는 1920X1280으로 결정됩니다.
    // 보간법을 사용하였습니다.
    resize(src, dst1, Size(), 4, 4, INTER_NEAREST);

    // src영상을 1920X1280 크기로 확대하여 dst2를 생성합니다.
    // 보간법을 따로 지정하지 않았으므로 기본값인 양선형 보간법을 사용합니다.
    resize(src,dst2,Size(1920,1280));

    // src영상을 1920X1280 크기로 확대하여 dst3를 생성합니다.
    // 보간법을 3차 회선 보간법을 사용합니다.
    resize(src,dst2,Size(1920,1280),0,0,INTER_CUBIC);

    // src영상을 1920X1280 크기로 확대하여 dst4를 생성합니다.
    // 보간법을 4차 회선 보간법을 사용합니다.
    resize(src,dst2,Size(1920,1280),0,0,INTER_LANCZOS4);
    
    // 입력 영상 src와 확대변환 결과 양상을 화면에 출력합니다.
    // 확대변환 결과 양상은 (400,500) 좌표부터 400X400크기의 부분 영상을 화면에 출력합니다.
    imshow("src",src);
    imshow("dst1",dst1(Rect(400,500,400,400)));
    imshow("dst2",dst2(Rect(400,500,400,400)));
    imshow("dst3",dst3(Rect(400,500,400,400)));
    imshow("dst4",dst4(Rect(400,500,400,400)));
    
    

    waitKey();
    destroyAllWindows();


    return 0;
}