#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
    }
    return total;
}

int sumR(int arr[],int n)
{
    if(n==0)
    return 0;
    else
    {
        return sum(arr,n-1)+arr[n];
    } 
}

int main()
{
     int n,s;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<sum(arr,n)<<endl;
    cout<<sumR(arr,n-1);
    return 0;
}