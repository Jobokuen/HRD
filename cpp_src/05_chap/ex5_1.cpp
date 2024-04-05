#include <iostream>
using namespace std;

//클래스 선언
class Circle{
private:
    int radius;                 //멤버 변수(속성, 정보)
public:
    Circle();
    Circle(int radius);
    ~Circle();
    int getRadius();
    void setRadius(int r);
    double getArea(void);       //멤버 함수(행동, 행위)
};

Circle::Circle() : Circle(1) { } // 위임 생성자

Circle::Circle(int radius){
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
    this->radius = radius;
    cout << "소멸자 실행 radius = " << radius << endl;
}

//클래스 구현 (보통 함수 구현)
int Circle::getRadius(){
    return radius;
}

void Circle::setRadius(int r){
    radius = r;
}

double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}

void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

// main
int main(void){
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius() << endl;
    return 0;
}