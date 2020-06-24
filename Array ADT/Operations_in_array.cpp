#include<iostream>
#include <array>
using namespace std;
int main()
{   int i;
    int arr[10];
    cout<<"Enter elements of array";
    for(i=0;i<5;i++)
    cin>>arr[i];
    int len=arr.length();
    cout<<"Element to be enetered at the end\n";
    int x;
    cin>>x;
    arr[len]=x;
    len++;
    for(i=0;i<7;i++)
    cout<<arr[i]<<" ";
    return 0;
}