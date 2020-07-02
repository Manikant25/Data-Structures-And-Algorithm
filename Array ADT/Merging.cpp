#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    /* All array should be sorted */
    int arr1[n];
    for(int l=0;l<n;l++)
    cin>>arr1[l];
    int m;
     cout<<"Enter size of another array array\n";
     cin>>m;
    int arr2[m];
    for(int v=0;v<m;v++)
    cin>>arr2[v];
    int h=m+n;
    int arr3[h];

  int i,j,k;
  i=0; //for arr1 index
  j=0; //for arr2 index
  k=0; //for arr3 index

  while(i<n && j<n)
  {
      /* Compare arr1 and arr2 , which ever is smaller is copied to arr3 */
      if(arr1[i]<arr2[j])
      arr3[k++]=arr1[i++];
      else
          arr3[k++]=arr2[j++];
      
  }
  /* copy remaing elements from arr1 and arr2 to arr3 */
  for(;i<n;i++)
  arr3[k++]=arr1[i];
  for(;j<m;j++)
  arr3[k++]=arr2[j];

cout<<"m="<<h<<endl;
  for(int m=0;m<h;m++)
  cout<<arr3[m]<<" ";

 return 0;
}