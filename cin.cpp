#include <iostream>

using namespace std;
int main(){
    int number = 0;
    cout << "please input a number!" << endl;
    cin >> number;
    cout << "The number is:" << number << endl;
    cout << "Other number!"<< endl;
    cin >> number;
    cout << "The number is changed to" << number << endl;
    system("pause");
    return 0;
}