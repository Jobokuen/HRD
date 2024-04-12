 #include<iostream>
 #include<string>
 using namespace std;

 class Point
 {
 protected:
    int x;
    int y;
 public:
    Point(){x = 0, y = 0;}
    void set (int x, int y);
    void showPonit();
 };

void Point::set(int x, int y){
    this->x = x;
    this->y = y;
}

void Point::showPonit(){
    cout << "(" << x << "," << y << ")" << endl;
}

class ColorPoint : public Point
{
private:
    string color;
public:
    void setColor(string color) { this->color = color;}
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint(){
    cout << color << ": ";
    showPonit();
}

bool ColorPoint::equals(ColorPoint p){
    if(x == p.x && y == p.y && color == p.color) return true;
    else return false;
}

 int main(void){
    Point p;
    p.set(2,3);
    //p.x = 5;  //protected 멤버로 선언된 x,y를 접근하기 때문에 컴파일 오류가 발생한다.
    //p.y = 5;
    p.showPonit();

    ColorPoint cp;
    //cp.x = 10;  // protected 멤버로 선언된 x,y를 접근하기 때문에 컴파일 오류가 발생한다.
    //cp.y = 10;
    cp.set(3,4);
    cp.setColor("Red");

    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2)) ? "true" : "fasle");
     
    
    return 0;
 }