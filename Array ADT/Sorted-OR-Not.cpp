/* Check whether the list is already sorted or not */
#include<iostream>
using namespace std;

bool is_sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        return false;
        
    }
    return true;
}
int main()
{
    int n;
    cout<<"size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in sorted manner\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<is_sorted(arr,n);
    return 0;
    
}