#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int price;
    int page;
public:
    Book(string title, string author, int price, int page);
    void show();
    void set(string title, string author, int price, int page);
};

Book::Book(string title, string author, int price, int page){
    this->price = price;
    this->page = page;
    this->title = title;
    this->author = author;
}

void Book::set(string title, string author, int price, int page){
    this->price = price;
    this->page = page;
    this->title = title;
    this->author = author;
}

void Book::show(){
    cout << title << ", " << author << ", " << price << ", " << page << endl;
}


int main(void){
    Book cpp("명품 C++", "황기태", 10000, 696);
    Book java = cpp;

    java.set("명품 자바", "홍길동", 12000, 800);

    cpp.show();
    java.show();
    return 0;
}