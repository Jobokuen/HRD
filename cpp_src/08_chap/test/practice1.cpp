#include<iostream>
#include<string>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(int radius = 0){this->radius = radius;}
    int getRadius(){ return radius;}
    void setRadius(int radius){this->radius = radius;}
    double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle
{
private:
    string name;
public:
    NamedCircle(int num, string name){
        setRadius(num);
        this->name = name;
    }
    void show(){cout << "반지름이 ";
    cout << getRadius() << "인 " << name << endl;}
};


int main(void){
    NamedCircle waffle(3, "waffle");
    waffle.show();
    return 0;
}