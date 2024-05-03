#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";


int main (void){
   //Rect 예제
   Rect rc1(10,20,20,20);
   Point pt1(40,40);
   Size sz1(100,100);
   Rect rc2(pt1,sz1);
   cout << rc1 << endl;
   cout << rc2 << endl;

    //RotatedREct 예제
    RotatedRect rr1(pt1, sz1, 30);
    Point2f pts[4];
    rr1.points(pts);
    cout << pts[0] << endl;
    cout << pts[1] << endl;
    cout << pts[2] << endl;
    cout << pts[3] << endl;
    
    return 0;
}   