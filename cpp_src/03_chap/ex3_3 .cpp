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

Circle::Circle(){
    radius = 1;
}

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
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;
    
    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;

    return 0;
}