#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cin >> num;
    cout << "The size of " << typeid(num).name() << "is"<< sizeof(num) <<endl; 
    return 0;
}