#include<iostream>
using namespace std;
int main()
{
    char a[]="python";
    char b[10];
    int i,j,t;
    for(j=0;a[j]!='\0';j++); //This give length of string 
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
cout<<a;
}