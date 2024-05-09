// 13-5
// 보행자 검출 예제 프로그램

#include"opencv2/opencv.hpp"
#include<iostream>

using namespace cv;
using namespace std;

String folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main(void){
    VideoCapture cap (folder + "vtest.avi");
    HOGDescriptor hog;
    hog.setSVMDetector(HOGDescriptor::getDaimlerPeopleDetector());

    Mat frame;
    while(true){
        cap >> frame;
        if(frame.empty())break;
        vector<Rect> detected;
        hog.detectMultiScale(frame, detected);
        for(Rect r : detected){
            rectangle(frame, r, Scalar(0,0,255),2);
        }
        imshow("frame",frame);
        if(waitKey(10) == 27) break;
    }
    

    return 0;
}
