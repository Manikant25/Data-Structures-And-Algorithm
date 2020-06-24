#include<iostream>
using namespace std;
int main()
{   int i;
    int A[3][4]={{1,2,3,4},{5,6,7,8},{10,11,12,13}};
    for(i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
    }

    //Using pointers

    int *A[3];
    A[0]=new int[4];
    A[1]=new int[4];
    A[2]=new int[4];

    A[1][2]=15;
    cout<<A[1][2];

    int **A;
    A=new int *[3];
    A[0]=new int[4];
    A[1]=new int[4];
    A[2]=new int[4];
    
     for(i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
    }

  

    return 0;
}