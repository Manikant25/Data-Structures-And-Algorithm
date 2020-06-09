#include<iostream>
using namespace std;

//Tail Recrusion-When in recrusion , it is last fuction to be excuted , it s called tail recrusion
void tail(int n)
{
    if(n>0)
    {
        cout<<n<<" "; //Everything is perfrormed at calling time 
        tail(n-1);
    }
}

//Tail recrusion can be easily converted into loops
void tloop(int n)  //This is more efficeint in terms of space
{
    while(n>0)
    {
        cout<<n<<" ";
        n--;
    }
}

//2nd types is Head Recrusion: If a fuction is doing somthing in returning time in head recrusion
void head(int n)
{
    if(n>0)
    {
        head(n-1);
        cout<<n<<" ";
    }
}

//Head recrusion cannot be easily converted into loop , but it can be
void hloop( int n)
{
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }
}

int main()
{
   tail(3);
   cout<<endl;     
   tloop(3);
   cout<<endl;
   head(3);
   cout<<endl;
   hloop(3);
   return 0;
}