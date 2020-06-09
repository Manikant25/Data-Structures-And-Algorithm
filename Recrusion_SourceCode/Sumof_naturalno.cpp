#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
    
}
//Using direct formula n(n+1)/2
int sum2(int n)
{
    return n*(n+1)/2;
}

//using for loop
int sloop(int n)
{
    int i,s=0;
    for(i=1;i<s;i++)
    s=s+i;
    return s;
}

int main()
{
    int n,s;
    cin>>n;
    s=sum(n);
    cout<<s<<endl;
    cout<<sum2(n)<<endl;
    cout<<sloop(n);
    return 0;
}