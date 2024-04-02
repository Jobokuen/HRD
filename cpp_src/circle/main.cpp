# include <iostream>
# include"Circle.h"
using namespace std;

int main(void){
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적 ";
    cout << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적 ";
    cout << area << endl;
    return 0;
}