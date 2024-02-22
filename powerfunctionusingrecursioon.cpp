#include <bits/stdc++.h>
using namespace std;
long long int power(int x,int n)
{
  if(n==0)
  return 1;
  return x*power(x,n-1);
}
int main()
{
  int x,n;
  n=3; // The power
  x=11;// The variable
  cout<<power(x,n);
}