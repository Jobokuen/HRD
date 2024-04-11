#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    int price, pages;
public:
    Book(string title = "", int price = 0, int pages=0){
        this->title = title; this->price = price; this->pages = pages;
    }
    void show(){
        cout << title << ' ' << price;
        cout << "원" << pages << "페이지" << endl;
    }
    string getTitle(){return title;}
    // (1)-1 연산자 함수를 Book 클래스의 멤버 함수로 선언.
    // void operator+=(int cash);
    // void operator-=(int cash);

    // (2)-2 외부함수에 대한 프랜드 함수 선언
    friend void operator+=(Book &a, int cash);
    friend void operator-=(Book &a, int cash);
};

// (1)-2 연산자 함수를 Book 클래스의 멤버 함수 정의.
// void Book::operator+=(int cash){
//     this->price = this->price + cash;
// }
// void Book::operator-=(int cash){
//     this->price = this->price - cash;
// }


// (2)-1 연산자 함수를 Book 클래스 외부함수로 선언 및 구현.
void operator+=(Book &a, int cash){
    a.price = a.price + cash;
}
void operator-=(Book &a, int cash){
    a.price = a.price - cash;
}


int main(void){
    Book a("청춘", 20000, 300), b("미래" , 30000, 500);
    a += 500;
    // b -= 500;
    a.show();
    b.show();

    return 0;
}