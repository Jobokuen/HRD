#include <iostream>
using namespace std;

//클래스 선언
class Circle{
public:
    int radius;                 //멤버 변수(속성, 정보)
    Circle();
    Circle(int r);
    void setRadius(int r);
    double getArea(void);       //멤버 함수(행동, 행위)
};

Circle::Circle() : Circle(1) { } // 위임 생성자

Circle::Circle(int r){
    radius = r;
}

//클래스 구현 (보통 함수 구현)
void Circle::setRadius(int r){
    radius = r;
}

double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}




int main()
{
    Circle circleArray[5] = {Circle(30),Circle(20), Circle() };
    int sizeArray = sizeof(circleArray);
    cout << sizeArray << endl;
    int count = sizeof(circleArray) / sizeof(circleArray[0]);

    for (int i = 0; i < count; i++)
        {
            cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
        }

    
    return 0;
}