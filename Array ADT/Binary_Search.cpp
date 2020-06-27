/* For Binary search list of the elements should be sorted*/
#include<iostream>
using namespace std;

//Iterative Binary Search Algorithm
int BinarySearchIterative(int arr[],int n,int data)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    { 
    int mid=low +(high-low)/2; //To avoid overflow
    if(arr[mid]==data)
    return mid+1;
    else if(arr[mid]<data)
    low=mid+1;
    else
        high=mid-1;
    }
    return -1; //Means element is not found
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
   cout<<BinarySearchIterative(arr,n,s);
}

/*Let us consider the problem of searching a word in a dictionary. Typically, we directly go to
some approximate page [say, middle page] and start searching from that point. If the name that we
are searching is the same then the search is complete. If the page is before the selected pages then
apply the same process for the first half; otherwise apply the same process to the second half.
Binary search also works in the same way. The algorithm applying such a strategy is referred to
as binary search algorithm.*/