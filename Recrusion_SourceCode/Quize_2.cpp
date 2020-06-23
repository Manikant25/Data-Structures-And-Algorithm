#include<iostream>
using namespace std;
 void foo(int n,int sum)
 {
     int k=0,j=0;
     if(n==0)
     return; //Means stop
     k=n%10;
     j=n/10;
     sum=sum+k;
     foo(j,sum);
     cout<<k;
 }

 int main()
 {
     int a,sum=0;
     cin>>a;
     foo(a,sum);
     cout<<endl<<sum;
     return 0;
 }

