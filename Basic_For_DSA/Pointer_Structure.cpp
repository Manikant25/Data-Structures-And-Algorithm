#include<iostream>
using namespace std;

 struct rectangle 
{
   int length;
   int breath;
};

int main()
{  struct rectangle r={10,15};
    r.length=25;
    cout<<r.length<<endl;
    struct rectangle *p=&r;
    r.length=44;
    cout<<r.length;   
    p->length=100;  //using pointer
    cout<<p->length;

    struct rectangle *j;
    p=(struct rectangle*)malloc(sizeof(struct rectangle)); //To get memory from the heap
    p->length=200;
    p->breath=400;
    cout<<p->length<<" "<<p->breath;

    
    
   return 0;
}