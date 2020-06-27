#include<iostream>
using namespace std;

/* Method-1 , we will take an auxilliary array(extra array) and will copy in reverse manner*/
void reverse_1(int a[],int n)
{   int b[n];
int j;//extra array
    for(int i=n-1,j=0;i>=0;j++,i--) //Copying A element to be in reverse
    {
        b[j]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

/* Method-2 using single array*/

void reverse_2(int a[],int n)
{    int temp,j;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{
     int n,s;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse_1(arr,n);
    cout<<endl;
    reverse_2(arr,n);
    
    return 0;
}
