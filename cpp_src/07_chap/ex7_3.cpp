#include<iostream>
using namespace std;

class Rect;

class RectManger{
public:
 bool equals(Rect r, Rect s);
 void copy(Rect &dest, Rect &src);
};

class Rect
{
private:
    int width, height;
public:
    Rect(int width, int height);
    friend RectManger;
};


Rect::Rect(int width, int height){
    this->width = width, this->height = height;
    }

bool RectManger::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height) return true;
    else return false;
}

void RectManger::copy(Rect &dest, Rect &src){
    dest.width = src.width ;
    dest.height = src.height;
}

int main(void){
    Rect a(3,4), b(4,5);
    RectManger man;

    man.copy(a,b);
    if(man.equals(a, b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
    return 0;
}

