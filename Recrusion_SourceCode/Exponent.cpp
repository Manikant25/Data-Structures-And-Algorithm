#include<iostream>
using namespace std;

int pow(int m,int n)  //First Approach
{
    if(n==0)
    return 1;
    else
    return pow(m,n-1)*m;
    
}

int pow2(int m,int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return pow(m*m,n/2);
    else
    {
        return m*pow(m*m,(n-1)/2);
    }
    

}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<pow(m,n);
    cout<<endl;
    cout<<pow2(m,n);
    return 0;
}