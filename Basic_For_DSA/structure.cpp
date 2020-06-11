#include<iostream>
using namespace std;

struct rectangle //Declarartion of structure 
{
    int length;
    int breath;
};

int main()
{
    struct rectangle r;  //Object declaration
    struct rectangle t={10,15}; //Object declaration + Initailisation
    r.length=20;
    r.breath=30;
    cout<<r.length<<" "<<r.breath<<endl;
    cout<<t.length<<" "<<t.breath<<endl;
    int n;
    n=sizeof(r);
    cout<<"Size of object variable is :"<<n;
    return 0;

}