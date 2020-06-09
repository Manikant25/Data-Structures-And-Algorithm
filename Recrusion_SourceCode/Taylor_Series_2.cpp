#include<iostream>
using namespace std;

//using loop
double e(double x,double n)
{
    double s=1;//for storing result from multiplication
    for(;n>0;n--)
    {
        s=1+x*s/n;
    }
    return s;
}

double e2(double x,double n)
{
    static double s=1;
    if(n==0)
    return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main()
{
  cout<<e(4,10)<<endl;
  cout<<e2(4,10);
  return 0;

}

