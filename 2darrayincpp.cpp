#include<iostream> 
using namespace std;
int main ()
{
    int m,n,i,j;
    cout<<"Enter the number of rows of the array\n"; cin>>n;
    cout<<"Enter the number of columns of the array\n"; cin>>m;
 
    int arr[n][m];
 
    cout<<"Enter the Elements of the array\n";
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){ cin>>arr[i][j];
        }
    }
 
    cout<<"Elements of given array: \n";
    //Loop through the array by incrementing value of i
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
 
    return 0;
}