#include <iostream>
using namespace std;

class Clock {
    public:
    Clock(int newH, int newM, int newS); //构造函数
    Clock():Clock(0,0,0){};//默认构造函数
    void setTime(int newH=0, int newM=0, int newS=0);
    void showTime();
    private:
    int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS)://构造函数函数体
    hour(newH), minute(newM), second(newS){}//大括号前面是初始化列表，大括号内是函数体

//Clock::Clock():hour(0), minute(0), second(0){} //默认构造函数函数体

void Clock::setTime(int newH, int newM, int newS){
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime(){
    cout << hour <<" : " <<minute<<" : "<<second<<endl;
}

int main(){
    Clock myClock(8,8,8); //调用有参数的构造函数
    Clock myOtherClock;//调用无参数的构造函数
    myClock.setTime(8,30,30);
    myClock.showTime();
    system("pause");
    myOtherClock.showTime();
    system("pause");
    return 0;
}