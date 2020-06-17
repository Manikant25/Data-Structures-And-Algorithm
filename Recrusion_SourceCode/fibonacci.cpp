#include<iostream>
using namespace std;

int fibr(int n)  //Using Recrusion, Excesssive Recrusion
{
    if(n<=1)
    return n;
    return fibr(n-2)+fibr(n-1);
}

int fibl(int n)  //Using loop
{
    if(n<=1)
    return 1;
    int z=0,f=1,s=0;
    for(int i=2;i<=n;i++) //The loop started with 2 becuase we already have 0 and 1 , and now we have to obtain 2th term
    {
        s=z+f;
        z=f;
        f=s;
    }
    return s;
}
int arr[100];

int fibm(int n) //Using Memoization
{
    if(n<=1)
    {
        arr[n]=n;
        return n; //Now it is returning the result in global array
    }
    else
    {
        if(arr[n-2]==-1)
        arr[n-2]=fibm(n-2);

        if(arr[n-1]==-1)
        arr[n-1]=fibm(n-1);
           
        //arr[n]=arr[n-2]+arr[n-1];
        return arr[n-2] + arr[n-1];
    }
}

int main()
{
    for(int i=0;i<100;i++)  //Initialize with -1
    arr[i]=-1;
    int n;
    cin>>n;
    cout<<fibr(n)<<endl<<fibl(n)<<endl<<fibm(n);
    return 0;

}