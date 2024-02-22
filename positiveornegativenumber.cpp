#include<iostream>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input1.txt" ,"r" ,stdin);
    // freopen ("output.txt" ,"w" , stdout);
    // #endif
int no ;
cout<<"enter a number:" ;
cin>>no;
if(no==0)
{
    cout<<"0 is negative positive nor negative";

}   
else if (no>0)
{
    cout<<no<<"is a positive number";


} 
else
{
    cout<<no<<"is a negative number";
}
return 0;

}
