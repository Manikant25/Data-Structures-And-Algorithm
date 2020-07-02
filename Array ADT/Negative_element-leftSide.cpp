#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(arr[i]<0)
        {
            i++;
        }
        while(arr[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;

}