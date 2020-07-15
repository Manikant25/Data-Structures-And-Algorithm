//Row major
#include <iostream>
using namespace std;
class lower
{
private:
 int *A;
 int n;
public:
 lower() //Defualt constructor 
 {
 n=2;
 A=new int[2*(2+1)/2];
 }
 lower(int n)
 {
 this->n=n;
 A=new int[n*(n+1)/2];
 }

 ~lower()
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
void lower::Set(int i,int j,int x)
{
 if(i>=j)
 A[i*(i-1)/2+j-1]=x; 
}
int lower::Get(int i,int j)
{
 if(i>=j)
 return A[i*(i-1)/2+j-1];
 return 0;
}
void lower::Display()
{
 for(int i=1;i<=n;i++)
 {
 for(int j=1;j<=n;j++)
 {
 if(i>=j)
 cout<<A[i*(i-1)/2+j-1]<<" "; 
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

 lower dm(d);

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