#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your Age:" ; cin >>age;
    if (age>=18)
        cout << "vote";
    else 
        cout << "can not vote";
        return 0;
}