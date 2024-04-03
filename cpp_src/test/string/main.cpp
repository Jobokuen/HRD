#include <iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> split(string str, char Delimiter);

// Date 클래스 선언
class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date(string date);
    Date(int a, int b, int c);
    void show();
    int getYear();
    int getMonth();
    int getday();
};

// Date 클래스 구현
Date::Date(string date){
    // vector<string> result = split(date,'/');
    // year = stoi(result[0]);
    // month = stoi(result[1]);
    // day = stoi(result[2]);

    
    // year = stoi(date.substr(0,3));
    // month = stoi(date.substr(4.5));
    // day = stoi(date.substr(7));
}
Date::Date(int a, int b, int c){ year = a, month = b, day = c;}

void Date::show(){cout << year << "년" << month << "월" << day << "일" << endl;}
int Date::getYear(){return year;}
int Date::getMonth(){return month;}
int Date::getday(){return day;}


int main (void){
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getday() << endl;
    return 0;
}

// vector<string> split(string str, char Delimiter) {
//     istringstream iss(str);             // istringstream에 str을 담는다.
//     string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
//     vector<string> result;
 
//     // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
//     while (getline(iss, buffer, Delimiter)) {
//         result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
//     }
 
//     return result;
// }