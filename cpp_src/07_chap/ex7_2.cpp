#include<iostream>
using namespace std;

class Rect;

class RectManger{
public:
 bool equals(Rect r, Rect s);
};

class Rect
{
private:
    int width, height;
public:
    Rect(int width, int height);
    friend bool RectManger::equals(Rect r, Rect s);
};


Rect::Rect(int width, int height){
    this->width = width, this->height = height;
    }

bool RectManger::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height) return true;
    else return false;
}

int main(void){
    Rect a(3,4), b(4,5);
    RectManger man;
    if(man.equals(a, b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
    return 0;
}

