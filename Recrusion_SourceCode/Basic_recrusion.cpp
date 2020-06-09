#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n;
        fun(n-1); //A function calling itself then it is called recrusive
    }
}

void fun1(int n)  
{
    if(n>0)
    {
        fun1(n-1);  //First it will call then print
        cout<<n;
    }
}

int main()
{
    int n;
    cin>>n;
    fun(n);
    cout<<endl;
    fun1(n);
    return 0;
}