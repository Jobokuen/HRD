#include <iostream>
using namespace std;

//클래스 선언
class Circle{
public:
    int radius;                 //멤버 변수(속성, 정보)
    Circle();
    Circle(int r);
    double getArea(void);       //멤버 함수(행동, 행위)
};

Circle::Circle() : Circle(1) { } // 위임 생성자

Circle::Circle(int r){
    radius = r;
}

//클래스 구현 (보통 함수 구현)
double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}




int main()
{
    Circle donut;
    Circle pizza(30);
    cout << donut.getArea() << endl;
    
    Circle *p;
    p = &donut;
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    p = &pizza;
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    return 0;
}