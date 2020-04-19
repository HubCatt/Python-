#include <iostream>
using namespace std;

double power(int a, int b){
    double val = 1;
    while (b){
        val *= a;
        b--;
    }
    return val;
}

int main(){
    double pow;
    cout << "please input the number"<< endl;
    int number = 0;
    cin >> number; 
    cout << "please input the power" << endl;
    int p = 0;
    cin >> p;
    pow = power(number, p);
    cout << number << " to the power " << p << " is " << pow <<endl;
    system("pause");
    return 0;
}