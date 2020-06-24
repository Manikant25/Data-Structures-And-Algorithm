#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    /* Though there is no method to increase the size of the array , but there is a way of doing it with
    pointers*/
    int *p=new int[5]; //Array of 5 elements
    for(int i=0;i<5;i++)
    cin>>p[i];
    for(int i=0;i<5;i++)
    cout<<p[i]<<" ";
    cout<<endl;

    /* To increase size create a big array from heap*/
    int *q=new int[10];
      
      for(int i=0;i<5;i++) //Copying value of p into q
      {
          q[i]=p[i];
      }
      delete []p;
      p=q;
      q=nullptr;
     for(int i=5;i<10;i++)
     cin>>p[i];
      cout<<endl;
      for(int i=0;i<10;i++) 
      cout<<p[i]<<" ";
    return 0;
}