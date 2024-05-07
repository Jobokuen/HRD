// 임베디드 환경에서 메모리 줄이고자 함

#include"opencv2/opencv.hpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){
    Mat img = imread(folder + "lenna.bmp");
    int keycode;

    
    namedWindow("img");
    imshow("img", img);

    const float fps = 30.0;
    TickMeter tm;     // 시간계산
    TickMeter tm2;


    while (true)
    {
        tm.start();
        tm2.start();
        keycode = waitKey(0);
        // cout << "keycode: " << keycode << endl;
        if(keycode == 27) break;        // ESC
        else if (keycode == 'i' || keycode == 'I'){
            img = ~img;
            imshow("img", img);
            
        }
        tm.stop();
        // 60프레임에 맞출수 있도록 딜레이를 검
        if(tm.getFPS() > fps){
            auto sleep_duration = static_cast<int>(1000.0*(tm.getFPS()-fps)/tm.getFPS()/fps);
            cout << "sleep_duration: " << sleep_duration << endl;
            this_thread::sleep_for(chrono::milliseconds(sleep_duration));
        }
        
        tm2.stop();
        cout << "tm2.stop(): " << tm2.getFPS() << endl;
    }
    destroyAllWindows();

    return 0;
}   

