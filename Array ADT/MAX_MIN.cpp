#include<iostream>
using namespace std;

int maxarray(int arr[],int n)
{   int max;
    max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int minarray(int arr[],int n)
{   int min;
    min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

int main()
{
    int n,s;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<maxarray(arr,n)<<" "<<minarray(arr,n);
    return 0;
}