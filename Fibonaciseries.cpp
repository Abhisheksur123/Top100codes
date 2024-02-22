#include <bits/stdc++.h>
using namespace std;
map<int,int> m;
int Fibonacci(int n)
{
    if(m[n]) return m[n];
    if(n<=1) return m[n]= n;
    return m[n]=Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    for(int i=0;i<15;i++)
    cout<<Fibonacci(i)<<" ";
}