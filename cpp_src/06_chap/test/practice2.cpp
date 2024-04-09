// 출력
// 1 20.5 Grace
// 2 20.5 Ashley
// 3 32.5 Helen

// 생성자를 중복 작성하고 프로그램을 완성하라.

#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
    int id;
    double weight;
    string name;
public:
    void show(){
        cout << id << ' ' << weight << ' ' << name << endl; 
    }
    // Person();
    Person(int id = 1, string name = "grace", double weight = 20.5);
    // Person(int id, string name, double weight);
};

// Person::Person(){
//     id = 1;
//     name = "grace";
//     weight = 20.5;
    
// }
// Person::Person(int id, string name){
//     this->id = id;
//     this->name = name;
//     weight = 20.5;
// }
Person::Person(int id, string name, double weight){
    this->id = id;
    this->name = name;
    this->weight = weight;
}

int main(void){
    Person grace, ashley(2, "Ashley"), helen(3, "Heloen", 32.5);
    grace.show();
    ashley.show();
    helen.show();

    return 0;
}

// 출력
// 1 20.5 Grace
// 2 20.5 Ashley
// 3 32.5 Helen

// 생성자를 중복 작성하고 프로그램을 완성하라.