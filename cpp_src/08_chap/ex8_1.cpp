 #include<iostream>
 #include<string>
 using namespace std;

 class Point
 {
 private:
    int x, y;
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
};

void ColorPoint::showColorPoint(){
    cout << color << ": ";
    showPonit();
}

 int main(void){
    Point p;
    ColorPoint cp;
    cp.set(3,4);
    cp.setColor("Red");
    cp.showColorPoint(); 
    return 0;
 }