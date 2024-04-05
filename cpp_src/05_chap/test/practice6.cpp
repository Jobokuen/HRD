#include<iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(int r) {radius = r;};
    ~Circle();
};

Circle::~Circle()
{
}
