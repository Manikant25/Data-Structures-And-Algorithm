#include<iostream>
using namespace std;
int main()
{
    char a[]="findings";
    int h[26],i;
    h[26]={0};
    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]+=1;

    }

    for(i=0;i<26;i++)
    {
        if(h[i]>1)
        {
        cout<<static_cast<char>(i+97);
        cout<<endl;
        cout<<h[i];
    }
    }
    return 0;
}
