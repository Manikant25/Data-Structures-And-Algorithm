#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int length=7;
    int size=10;
    int i;
    for(i=0;i<length;i++)
    cin>>arr[i];
    int index,value;
    cin>>index>>value;
    for(i=length;i>index;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[index]=value;
    length++;
    cout<<endl;
     for(i=0;i<length;i++)
    cout<<arr[i];
     return 0;
}

