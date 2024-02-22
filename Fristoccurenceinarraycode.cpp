#include <bits/stdc++.h>
using namespace std;
int firstOccurrence(int *arr,int size,int i,int target)
{
  if(i==size)
  return -1; // If the element is not present
  if(arr[i]==target)
  return i;
  return firstOccurrence(arr,size,i+1,target);
}
int main()
{
  int arr[]={1,2,3,2,3,4,3,4,6,5,3};
  int size=11;
  int target=4;
  cout<<firstOccurrence(arr,11,0,target);
}