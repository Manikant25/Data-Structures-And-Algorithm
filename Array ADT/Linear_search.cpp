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
    cout<<"Element that Has to be searched\n";
    int key;
    int flag=-1;
    int pos;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
    flag=0;
      pos=i;
      break;
        }
        
    }
 if(flag==0)
 {
     cout<<"element found at postion "<<pos+1;

 }
 else
 {
     cout<<"Element not found";
 }
 

}