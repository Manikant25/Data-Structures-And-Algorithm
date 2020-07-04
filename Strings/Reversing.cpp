#include<iostream>
using namespace std;
int main()
{
    char a[]="python";
    char b[10];
    int i;
    for(i=0;a[i]!='\0';i++); //This give length of string 
    i=i-1;
    int j;
    for(j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    cout<<b;
    return 0;

}