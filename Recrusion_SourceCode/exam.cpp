#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int data[5]={1,7,46,9,6};
    vector<int> data_vec(data, data+5);
    int modulus = 3; 
    //use of lambda's for predicates in find_if
    auto q =  find_if( data_vec.begin(),data_vec.end(), 
     [](int elem)->bool{ if (elem % 2 ==0 )return true;     	                   else  return false;} ) ;

    cout << "first *q " << *q << endl;

    //next lambda has a capture by value

    q =  find_if( data_vec.begin(),data_vec.end(), 
[=](int elem)->bool{ if (elem % modulus ==0 )
                          return true;  
                     else  return false;}
    ) ;

    cout << "second *q " << *q << endl;
}