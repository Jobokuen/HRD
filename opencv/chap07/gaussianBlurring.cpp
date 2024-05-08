// GaussianBlur() 함수를 사용해서 가우시안 필터 블러링을 수행하는 예제 코드

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "rose.bmp",IMREAD_GRAYSCALE);

    imshow("src",src);

    Mat dst;
    for (int ksize = 1; ksize <= 5; ksize+=2)
    {
        GaussianBlur(src,dst,Size(),(double)ksize);        // ksize = 블러링커널 크기
        String desc = format("sigma: %d", ksize);
        // 커널 사이즈 텍스트 표시
        putText(dst,desc,Point(10,30), FONT_HERSHEY_SIMPLEX,1.0, Scalar(255),1,LINE_AA);

        imshow("dst",dst);
        waitKey();
    }
    destroyAllWindows();
   
    return 0;
}