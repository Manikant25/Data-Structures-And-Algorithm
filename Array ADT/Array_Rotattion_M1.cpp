#include<iostream>
using namespace std;

void leftRotate(int arr[],int n,int d)
{
      int temp[d];
      for(int i=0;i<d;i++)  //Storing firstd elements in temp array
      {
          temp[i]=arr[i];
      }

      for(int i=d;i<n;i++) //Shift rest of the array
      {
         arr[i-d]=arr[i];
      }
      int j;
      for(int i=n-d,j=0;i<n;i++,j++)
      {
          arr[i]=temp[j];
      }

      for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

}

int main()
{
    int n;
    cout<<"size of an array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    leftRotate(arr,n,2);
    return 0;
}