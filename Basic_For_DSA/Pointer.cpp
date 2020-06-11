#include<iostream>
using namespace std;
int main()
{
int a=10; //Data variable   //Every varible decalred will be in stack
    int *p; //Adreess variable
    p=&a; //Store address of a
    cout<<a<<endl; //10
    cout<<*p; //10 (Dreferencing )
    int *j;
    j=(int *)malloc(5*sizeof(int));  //Allocating memory from heap(IN C)
    int *k;
    k=new int[5]; //(IN C++)
    //Refferencing
    int b=20;
    int &r=b; //This refference should be initialize at the time of declaration
    cout<<b;
    cout<<r++;
    cout<<endl<<r;


    
    

    return 0;
}