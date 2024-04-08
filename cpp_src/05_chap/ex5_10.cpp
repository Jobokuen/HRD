#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
    int id;
    char* name;
public:
    Person(int id, char* name);
    Person(const Person &c);
    ~Person();
    void changeName(const char * name);
    void show();
};

Person::Person(int id, char* name){
    this->id = id;
    int len = strlen(name);         //strlen do not contain the NULL
    this->name = new char[len+1];
    strcpy(this->name , name);
}

Person::Person(const Person &c){
    this->id = c.id;
    int len = strlen(c.name);        
    this->name = new char[len+1];
    strcpy(this->name , c.name);
}

Person::~Person(){
    if(name) delete [] name;
}
void Person::changeName(const char * name){
    if(strlen(name) > strlen(this->name)) return;
    strcpy(this->name,name);
}

void Person::show(){
    cout << id << ", ";
    cout << name << endl;
}

int main(void){
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ------" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter 이름을 Grace로 변경한 후 -----" << endl;
    father.show();
    daughter.show();

    return 0;
}
