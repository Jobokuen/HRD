#include<iostream>
using namespace std;

// 선언 ㅡ 구현 ㅡ 객체생성
// class 선언
class TV{                   // TV 이름의 클래스 선언
public:
    bool on;
    int channel;        // 멤버변수 초기화
    int volume;
    TV();
    TV(int r);
    void powerOn();
    void powerOff();
    void increaseChannel();
    void decreaseChannel();
    void increaseVolume();
    void decreaseVolume();
};  

TV::TV(){
    channel = 1;
}

TV::TV(int r){
    channel = r;
}                        // 반드시 세미클론(;)으로 종료

// class 구현
void TV::powerOn(){
    on = true;
}
void TV::powerOff(){
    on = false;
}
void TV::increaseChannel(){
    channel = channel + 1;
}
void TV::decreaseChannel(){
    channel = channel - 1;
}
void TV::increaseVolume(){
    volume += 1;
}
void TV::decreaseVolume(){
    volume -= 1;
}

int main(void){
    // LG > set channel 10
    // samsung > set channel
    TV samsung(100);
    TV LG(100);

    // int result = TV.increaseChannel();
    // cout << area << end1;
    

    return 0;
}