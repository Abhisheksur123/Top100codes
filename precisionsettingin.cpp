#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double x =1.234, y =1.500, z =1.789;
    
    cout << "Floor - \n";

    cout << floor(x) << endl;
    cout << floor(y) << endl;
    cout << floor(z) << endl;
    
    cout << "\n\nCeil - \n";
    
    cout << ceil(x) << endl;
    cout << ceil(y) << endl;
    cout << ceil(z) << endl;
    
    cout << "\n\nTrunc - \n";

    
    cout << trunc(x) << endl;
    cout << trunc(y) << endl;
    cout << trunc(z) <<endl;
    
    cout << "\n\nRound - \n";
    
    cout << round(x) << endl;
    cout << round(y) << endl;
    cout << round(z) << endl;
    
    cout << "\n\nFloor - \n";

    double a =-1.234, b =-1.500, c =-1.789;
    cout << floor(a) << endl;
    cout << floor(b) << endl;
    cout << floor(c) << endl;

    cout << "\n\nCeil - \n";

    cout << ceil(x) << endl;
    cout << ceil(y) << endl;
    cout << ceil(z) << endl;

    cout << "\n\nTrunc - \n";
    
    cout << trunc(x) << endl;
    cout << trunc(y) << endl;
    cout << trunc(z) <<endl;

    cout << "\n\nRound - \n";
    
    cout << round(x) << endl;
    cout << round(y) << endl;
    cout << round(z) << endl;

    cout << "\n\n Lets Talk Precision now\n";
    
    double pi = 3.14159, neg_pi = -3.14159;
    
    cout << fixed << setprecision(0) << pi <<" "<<neg_pi<<endl;
    cout << fixed << setprecision(1) << pi <<" "<<neg_pi<<endl;
    cout << fixed << setprecision(2) << pi <<" "<<neg_pi<<endl;
    cout << fixed << setprecision(3) << pi <<" "<<neg_pi<<endl;
    cout << fixed << setprecision(4) << pi <<" "<<neg_pi<<endl;
    cout << fixed << setprecision(5) << pi <<" "<<neg_pi<<endl;
    cout << fixed << setprecision(6) << pi <<" "<<neg_pi<<endl;
        cout << scientific << setprecision(6) << pi <<" "<<neg_pi<<endl;

    return 0;
    
}