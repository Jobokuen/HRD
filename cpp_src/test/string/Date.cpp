#include"Date.h"
using namespace std;


Date::Date(char a){
    
}

Date::Date(int a, int b, int c)
{ year = a, month = b, day = c;}


void Date::show(){
    cout << year << "년" << month << "월" << day << "일" << endl;
}
int Date::getYear(){
    return year;
}
int Date::getMonth(){return month;}
int Date::getday(){return day;}