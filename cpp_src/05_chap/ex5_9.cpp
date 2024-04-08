#include<iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(const Circle& c);
    Circle() {radius = 1;};
    Circle(int radius) {this-> radius = radius;};
    double getArea() {return 3.14*radius*radius;}
};

Circle::Circle(const Circle &c)
{
}



int main(void){
    Circle src(30);
    Circle dest(src);

    // cout << "원본의 면적 = " << src.getArea() << endl;
        
    return 0;
}      