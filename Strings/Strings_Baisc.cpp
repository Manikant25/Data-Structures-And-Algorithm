#include<iostream>
using namespace std;
int main()
{
    char temp;
    temp='A'; //Valid
    // temp='AB'; Not valid
    cout<<temp<<endl;
    char x[5]; //Array of 5 character
    char y[5]={'A','B','C','D','E'}; //Declaration and Initialization
    char m[]={65,66,67,68,69}; //This and above statement are same
    char name[10]={'M','A','N','I','\0'}; // '\0' is delimiter and when it is added to array of character , it becomes string
    char name1[]="Mani"; //In this compiler automatically put delimiter 
    char *name2="Manikant"; //This string will automatically be created in heap
    //for string untill enter is pressed use this
    gets(name);
    
}