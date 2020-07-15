//Column major
#include <iostream>
using namespace std;
class upper
{
private:
 int *A;
 int n;
public:
 upper() //Defualt constructor 
 {
 n=2;
 A=new int[2*(2+1)/2];
 }
 upper(int n)
 {
 this->n=n;
 A=new int[n*(n+1)/2];
 }

 ~upper()
 {
 delete []A;
 }
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension()
 {return n;
 }

};
void upper::Set(int i,int j,int x)
{
 if(i<=j)
 A[(i-1)*n-(i-2)*(i-1)/2+(j-i)]=x; 
}
int upper::Get(int i,int j)
{
 if(i<=j)
 return A[(i-1)*n-(i-2)*(i-1)/2+(j-i)];
 return 0;
}
void upper::Display()
{
 for(int i=1;i<=n;i++)
 {
 for(int j=1;j<=n;j++)
 {
 if(i<=j)
 cout<<A[(i-1)*n-(i-2)*(i-1)/2+(j-i)]<<" "; 
 else
 cout<<"0 ";
 }
 cout<<endl;
 }
}

int main()
{
 int d;
 cout<<"Enter Dimensions";
 cin>>d;

 upper dm(d);

 int x;
 cout<<"Enter All Elements";
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cin>>x;
 dm.Set(i,j,x);
 }
 }

 dm.Display();
 return 0;
}