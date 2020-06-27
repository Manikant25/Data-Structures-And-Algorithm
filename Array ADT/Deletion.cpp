#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter size of the array\n";
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Element index that Has to be deleted\n";
    int index;
    cin>>index;
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1]; //shifting the array elements
    }
    n--;
     for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


}