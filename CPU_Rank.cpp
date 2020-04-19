#include <iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
    private://私有变量
    CPU_Rank rank;
    int frequency;
    float voltage;

    public:
    CPU() = default;
    CPU(CPU_Rank r, int f, float v){ //构造函数，初始化私有变量
        rank = r;
        frequency = f;
        voltage = v;
        cout << "construct a CPU!" << endl;
    }

    ~CPU () {cout <<"dele a CPU!"<<endl;} //析构函数

    CPU_Rank GetRank() const {return rank;}
    int GetFrequency() const {return frequency;}
    float GetVoltage() const {return voltage;}  //外部接口

    void SetRank(CPU_Rank r) {rank = r;}
    void SetFrequency(int f) {frequency = f;}
    void SetVoltage(float v) {voltage = v;}

    void Run() {cout << "CPU RUN!" << endl;}
    void Stop() {cout << "CPU STOP!"<< endl;}
};

int main(){
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();

    return 0;
}