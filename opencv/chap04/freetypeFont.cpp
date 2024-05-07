#include"opencv2/opencv.hpp"
#include"opencv2/freetype.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main (void){

    Scalar white = Scalar(255,255,255);
    Scalar yellow = Scalar(0,255,255);
    Scalar blue = Scalar(255,0,0);
    Scalar green = Scalar(0,255,0);
    Scalar red = Scalar(0,0,255);
    
    Mat img(500,800,CV_8UC3,white);

    Ptr<freetype::FreeType2> ft2 = freetype::createFreeType2();
    //ft2->loadFontData("/usr/share/fonts/truetype/",0);      // 한글 지원 폰트 주소 저장
    String text = u8"안녕하세요, utf-8테스트입니다.";
    int fontHeight = 60;
    Size textSize = ft2->getTextSize(text, fontHeight, -1, 0);

    ft2->putText(img, text, Point(20,60 + textSize.height), fontHeight, green,1,LINE_AA, true);
    
    imshow("img", img);
    waitKey();

    return 0;
}   
