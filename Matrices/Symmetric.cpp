#include <iostream> 
using namespace std; 
  
const int MAX = 100; 
  
// Fills transpose of mat[N][N] in tr[N][N] 
void transpose(int mat[][MAX], int tr[][MAX], int N) 
{ 
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            tr[i][j] = mat[j][i]; 
} 
  
// Returns true if mat[N][N] is symmetric, else false 
bool isSymmetric(int mat[][MAX], int N) 
{ 
    int tr[N][MAX]; 
    transpose(mat, tr, N); 
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            if (mat[i][j] != tr[i][j]) 
                return false; 
    return true; 
} 
  
// Driver code 
int main() 
{ 
    int mat[][MAX] = { { 1, 3, 5 }, 
                       { 3, 2, 4 }, 
                       { 5, 4, 1 } }; 
  
    if (isSymmetric(mat, 3)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 