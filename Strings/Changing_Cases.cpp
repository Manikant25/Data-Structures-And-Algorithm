#include<iostream>
using namespace std;
int main()
{
    char A[]="WELCOME";
    int i;
    for(i=0;A[i]!='\0';i++)
    A[i]+=32; //Add 32 for lowercase
    cout<<A<<endl;
    for(i=0;A[i]!='\0';i++)
    A[i]-=32; //Subract 32 for uppercase
    cout<<A;
    char B[]="WelComE";
    for(i=0;A[i]!='\0';i++)
    {
        if(B[i]>=65 && B[i]<=90)
        B[i]+=32;
        else if(B[i]>='a' && B[i]<=122)
        B[i]-=32;
    }
    cout<<endl;
    cout<<B;
    
    return 0;
}