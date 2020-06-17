#include<iostream>
using namespace std;

int fact(int n) //Factorial Function
{
    if(n==0)
    return 1;
    else
    {
        return fact(n-1)*n;
    }
}
int c(int n,int r)
{
    int a,b,c;
    a=fact(n);
    b=fact(r)*fact(n-r);
    return a/b;
}
 
int cr(int n,int r)  //Using Pascals Triangle , Value of nCr obtained by performing additions recrusively
{
    if(r==0||n==r) //At extreme point return 1 as nCn and nC0 are 1
    return 1;
    else
    {
        return cr(n-1,r-1)+cr(n-1,r);
    }
    
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<c(n,r)<<endl;
    cout<<cr(n,r);
    return 0;
}