#include<iostream>
using namespace std;

int main()
{
    int x=10; //scalar variable
    int a[5]; //vector variables
    int b[5]={0}; //All five element will be initialized to zera
    int c[]={1,2,3,4,5,6,7,8,9,10};//Dunamically take size

    for(int i=0;i<5;i++)
     cout<<b[i];

     cout<<endl<<c[0];
cout<<"----------------------------------------------------------------------------------------------------"<<endl;
int n;
int m[n]; //In C++ size of an array is decided on runtime
/* For accessing anything from heap we mist have a pointer variable */
int k[5];
int *p;
p=new int[5]; //p=(int*)malloc(5*sizeof(int)) , in C
/* If unused memeory is not releasd then it cuases memory leak problem*/
delete[] p; //Deallocation of memeory in C++
// free(p) in C
cin>>p[0];  //Pointer acts like the name of the array
cout<<endl<<p[0];

return 0;
}