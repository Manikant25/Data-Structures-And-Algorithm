#include <iostream>
using namespace std;
int main() {
   int arr[5] = {4, 1, 8, 2, 9};  
   int len = sizeof(arr)/sizeof(arr[0]);  //Using sizeof
   cout << "The length of the array is: " << len<<endl;
   len = *(&arr + 1) - arr; //Using pointers
   cout << "The length of the array is: " << len;  
   return 0;
}