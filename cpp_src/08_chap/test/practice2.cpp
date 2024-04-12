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
    NamedCircle(int num=0, string name=""){
        setRadius(num);
        this->name = name;
    }
    string showName(){return name;}
    void setNameCircle(int num, string name){
        setRadius(num);
        this->name = name;
    }
    void operator>> (int num);
};

void NamedCircle::operator>> (int num){
    cout << getRadius() << " " << name << endl;
}

int main(void){
    int count = 0;
    int radius = 0;
    int max = 0;
    string name = "";
    cin >> count;
    NamedCircle *pizza = new NamedCircle[count];
    cout << count << "개의 정수 반지름과 원의 이름을 입력하세요" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << (i+1) << ">> " ;
        cin >> radius;
        getline(cin, name);
        pizza[i].setNameCircle(radius, name);
        if(radius > max) max = radius;
    }
    // cout << max << endl;
    for (int i = 0; i < 5; i++)
    {
        // pizza[i] >> (i+1);
        if(pizza[i].getRadius() == max) name = pizza[i].showName();
    }
    
    cout << "가장 면적이 큰 피자는 " << name << "입니다." << endl;
    return 0;
}