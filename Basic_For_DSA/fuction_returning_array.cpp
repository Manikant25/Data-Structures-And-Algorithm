#include<iostream>
using namespace std;

int [] func(int n)
{   int *p;
    p=(int *)malloc(n*sizeof(int));
    return(p);
}

int main()
{
    int *a;
    a=func(5);
    return 0;
}