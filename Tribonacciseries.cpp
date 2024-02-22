#include <bits/stdc++.h>
using namespace std;
map<int,int> m;
int Tribonacci(int n)
{
    if(m[n]) return m[n];
    if(n<=2) return m[n]= n;
    return m[n]=Tribonacci(n-1)+Tribonacci(n-2)+Tribonacci(n-3);
}
int main()
{
    for(int i=0;i<15;i++)
    cout<<Tribonacci(i)<<" ";
}