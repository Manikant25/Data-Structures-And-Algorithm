#include<iostream>
using namespace std;
struct rectangle //Declarartion of structure 
{
    int length;
    int breath;
};

int area(struct rectangle r)
{
   // r.length++; To be reviwed!
    return r.breath*r.length;
}

//To modify actual parameter , it hsould be called by address
void changlength(struct rectangle *k,int v)
{
      k->length=v;
}

int main()
{
struct rectangle e={10,25};
changlength(&e,30);
cout<<area(e);
return 0;
}