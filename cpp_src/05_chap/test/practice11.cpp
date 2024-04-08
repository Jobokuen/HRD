#include<iostream>
#include<cstring>
using namespace std;

class Book
{
private:
    char *title;
    char* author;
    int price;
    int page;
public:
    Book(const char* title, const char* author, int price, int page);
    Book(Book &c);
    void show();
    void set(const char* title, const char* author, int price, int page);
    ~Book();
};

Book::Book(const char* title, const char* author, int price, int page){
    this->price = price;
    this->page = page;
    
    int len1 = strlen(title);
    this->title = new char [len1+1];
    strcpy(this->title,title);

    int len = strlen(author);
    this->author = new char [len+1];
    strcpy(this->author,author);
}

Book::Book(Book &c){
    int len1 = strlen(c.title);
    this->title = new char [len1+1];
    strcpy(this->title,c.title);

    int len = strlen(c.author);
    this->author = new char [len+1];
    strcpy(this->author,c.author);

    this->price = c.price;
    
    this->page = c.page;
}

void Book::set(const char* title, const char* author, int price, int page){
    this->price = price;
    this->page = page;

    if(title) delete [] this->title;
    int len1 = strlen(title);
    this->title = new char [len1+1];
    strcpy(this->title,title);

    if(author) delete [] this->author;
    int len = strlen(author);
    this->title = new char [len+1];
    strcpy(this->author,author);
}

void Book::show(){
    cout << title << ", " << author << ", " << price << ", " << page << endl;
}

Book::~Book()
{   if(title){
        delete [] title;
    }
    if(author){
        delete [] author;
    }
}


int main(void){
    Book cpp("명품 C++", "황기태", 10000, 696);
    Book java = cpp;

    java.set("명품 자바", "홍길동", 12000, 800);

    cpp.show();
    java.show();
    return 0;
}