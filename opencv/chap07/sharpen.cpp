// GaussianBlur() 함수를 이용한 언샤프 마스크 필터링 예제

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "rose.bmp",IMREAD_GRAYSCALE);
    imshow("src",src);

    // 가우시안 필터의 표준편차 sigma값을 1부터 5까지 증가시키면서 언샤프 마스크 필터링을 수행함.
    for (int sigma = 1; sigma <= 5; sigma++)
    {
        // 가우시안 필터를 이용한 블러링 영상을 blurred에 저장
        Mat blurred;
        GaussianBlur(src, blurred, Size(), sigma);

        // 언샤프 마스크 필터링 수행
        float alpha = 1.f;
        Mat dst = (1+alpha)*src-alpha*blurred;

        // 샤프닝 결과 영상 dst에 사용된 sigma값 출력
        String desc = format("sigma: %d", sigma);
        putText(dst,desc,Point(10,30),FONT_HERSHEY_SIMPLEX,1.0,Scalar(255),1,LINE_AA);

        imshow("dst",dst);
        waitKey();
    }

    destroyAllWindows();
    
    return 0;
}