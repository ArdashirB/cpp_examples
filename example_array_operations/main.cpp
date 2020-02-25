/********************************
 * author: Ardashir Bulsara
 * reference: 
 * 
 * 
 ********************************/
#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;
/********************
 * Function: main
 * Example operations on an array / demonstrations of operations on vectors
 ********************/
int main()
{
    array<int, 3> B= {1, 2, 3};
    vector<int> A= {1, 2, 3};
    vector<int> subarray_A(A.begin()+0,A.begin()+1 );
   for(size_t i = 3; i--;)
    {
        cout << A[i];
    }
    
    return 0;
}