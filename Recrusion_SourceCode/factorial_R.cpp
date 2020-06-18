#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<=1) /* Base Condition */
    return 1;
    else
    {
        return fact(n-1)*n;  /* Recrusive Case */
    }
    
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
