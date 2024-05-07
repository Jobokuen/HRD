#include"opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

string folder = "/home/hrd/hrd/HRD-1/opencv/data/";

int main (void){
    Mat img = imread(folder + "lenna.bmp");
    int keycode;

    
    namedWindow("img");
    imshow("img", img);
    while (true)
    {
        keycode = waitKey(0);
        cout << "keycode: " << keycode << endl;
        if(keycode == 27) break;        // ESC
        else if (keycode == 'i' || keycode == 'I'){
            img = ~img;
            imshow("img", img);
        }
    }
    destroyAllWindows();

    return 0;
}   

