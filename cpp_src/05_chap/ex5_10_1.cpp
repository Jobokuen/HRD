#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
    int id;
    string name;
public:
    Person(int id, string name);
    // Person(const Person &c);
    void changeName(string name);
    void show();
};

Person::Person(int id, string name){
    this->id = id;
    this->name = name;
}

// Person::Person(const Person &c){
//     this->id = c.id;
//     this->name = c.name;
// }

void Person::changeName(string name){
    this->id = id;
    this->name = name;
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
