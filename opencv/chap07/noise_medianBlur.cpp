// 미디언 필터링 예제 코드

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    Mat src = imread(folder + "lenna.bmp",IMREAD_GRAYSCALE);
    
    // src영상에서 10%해당하는 픽셀값을 0 또는 255로 설정합니다.
    int num = (int)(src.total() * 0.1);
    for (int i = 0; i < num; i++)
    {
        int x = rand() % src.cols;
        int y = rand() % src.rows;
        src.at<uchar>(y,x) = (i%2)*256;
    }
    
    // 표준편차가 1인 가우시안 필터링을 수행하여 dst1에 저장합니다.
    Mat dst1;
    GaussianBlur(src,dst1, Size(),1);

    // 크기가 3인 미디언 필터를 실행하여 dst2에 저장합니다.
    Mat dst2;
    medianBlur(src,dst2,3);

    imshow("src",src);
    imshow("dst1",dst1);
    imshow("dst2",dst2);
    waitKey();
    destroyAllWindows();
    return 0;
}