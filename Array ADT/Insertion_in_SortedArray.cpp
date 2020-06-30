#include<iostream>
using namespace std;

void insert(int arr[],int n,int x)
{
    int i=n-1;
    while(arr[i]>x)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
}

int main()
{
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter element to be added";
     int x;
     cin>>x;
     insert(arr,n,x);
      for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  
    return 0;
}