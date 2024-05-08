// blur() 함수를 사용해서 블러링을 수행하는 예제 코드

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "rose.bmp",IMREAD_GRAYSCALE);

    imshow("src",src);

    Mat dst;
    for (int ksize = 3; ksize <= 7; ksize+=2)
    {
        blur(src,dst,Size(ksize,ksize));        // ksize = 블러링커널 크기
        String desc = format("Mean: %dx%d", ksize,ksize);
        // 커널 사이즈 텍스트 표시
        putText(dst,desc,Point(10,30), FONT_HERSHEY_SIMPLEX,1.0, Scalar(255),1,LINE_AA);

        imshow("dst",dst);
        waitKey();
    }
    destroyAllWindows();
    
    
    return 0;
}