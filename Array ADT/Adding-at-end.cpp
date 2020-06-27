#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int length=6;
    int size=10;
    int i;
    for(i=0;i<length;i++)
    cin>>arr[i];
    cout<<"Element to be inserted";
    int n;
    cin>>n;
    arr[length]=n;
    length++;
    cout<<endl;
    cout<<"New Array is :";
     for(i=0;i<length;i++)
    cout<<arr[i];
    return 0;
    
}