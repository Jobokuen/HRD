// 1. windows on lenna image
// 2. 마우스 위치에 50,50 사각형
// 3. 마우스 클릭시 rgb값 출력
// 4. BGR값을 vector에 넣고 파일에 저장
// 5. 최적화 > x

#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";
struct MyData{
    Scalar white = Scalar(255,255,255);
    Scalar yellow = Scalar(0,255,255);
    Scalar blue = Scalar(255,0,0);
    Scalar green = Scalar(0,255,0);
    Scalar red = Scalar(0,0,255);
    bool flag = false;

    Mat img;
    Point pt01d;
};
void on_mouse(int event, int x, int y, int flags, void*);

int main (void){
    MyData myData;
    myData.img = imread(folder + "lenna.bmp");

    
    namedWindow("img");
    setMouseCallback("img",on_mouse, (void *)&myData);
    
    imshow("img", myData.img);
    waitKey();

    return 0;
}   

void on_mouse(int event, int x, int y, int flags, void* myData){
    MyData *ptr = (MyData *)myData;
    switch(event){
        case EVENT_LBUTTONDOWN:
            ptr->pt01d = Point(x,y);
            cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
            ptr->flag = true;
            break;
        case EVENT_LBUTTONUP:
            cout << "EVENT_LBUTTONUP: " << x << ", " <<  y << endl;
            ptr->flag = false;
            break;
        case EVENT_MOUSEMOVE:
            if(ptr->flag & EVENT_FLAG_LBUTTON){
                // 사각형 생성
                // 백그라운드 이미지 생성(clone)
                imshow("img", ptr->img);
                ptr->pt01d = Point(x,y);
            }
            break;
    }

}