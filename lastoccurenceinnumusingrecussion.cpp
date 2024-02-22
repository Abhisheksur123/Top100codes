#include <bits/stdc++.h>
using namespace std;
int LastOccurrence(int *arr,int size,int i,int target,int pos)
{
  if(i==size)
  return pos; // If the element is not present
  if(arr[i]==target)
  pos=i;
  return LastOccurrence(arr,size,i+1,target,pos);
}
int main()
{
  int arr[]={1,2,3,2,3,4,3,4,6,5,3};
  int size=11;
  int target=4;
  int pos=-1;
  cout<<LastOccurrence(arr,11,0,target,pos);
}