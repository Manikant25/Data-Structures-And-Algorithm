#include<iostream>
using namespace std;
int main()
{
    int arr[15];
    for(int i=0;i<10;i++)
    cin>>arr[i];
    cout<<"Element to be inserted in sorted array\n";
    int x;
    cin>>x;
    int i=9;
    while(arr[i]>x)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
    for(int i=0;i<11;i++)
    cout<<arr[i]<<" ";

    return 0;
}