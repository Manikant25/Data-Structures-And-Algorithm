#include<iostream>
using namespace std;

int BinarySearchRecrursive(int arr[],int low,int high,int data)
{
  int mid=low+(high-low)/2;
  if(low>high)
  return -1;
  if(arr[mid]==data)
  return mid+1;
  else if(arr[mid]<data)
  return BinarySearchRecrursive(arr,mid+1,high,data);
  else  
      return BinarySearchRecrursive(arr,low,mid-1,data);
      return -1; 
}


int main()
{
    int n,s;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
   cout<<"Enter the element to be searched\n";
   cin>>s;
   cout<<BinarySearchRecrursive(arr,0,n-1,s);
}