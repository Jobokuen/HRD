#include<iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;
public:
    Rectangle();
    Rectangle(int w, int r);
    Rectangle(int length);
    bool isSqare();
};

Rectangle::Rectangle() : Rectangle(1){}

Rectangle::Rectangle(int w, int r)
{   width = w, height = r;}

Rectangle::Rectangle(int length){
    width = height = length;
}

bool Rectangle::isSqare(){
    if(width == height) return true;
    else return false;
}

int main(void){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSqare()) cout << "rect1은 정사각항이다." << endl;
    if(rect2.isSqare()) cout << "rect2은 정사각항이다." << endl;
    if(rect3.isSqare()) cout << "rect3은 정사각항이다." << endl;
    
    return 0;

}