#include<iostream>
using namespace std;

int func(int n)
{
    if(n>100)
    {
    return n-1;
    cout<<n<<" ";
    }
    else
    {
    return func(func(n+1));
}
}

int main()
{
    func(95);
    return 0;
}