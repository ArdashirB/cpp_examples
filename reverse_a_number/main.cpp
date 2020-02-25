/********************************
 * author: Ardashir Bulsara
 * reference: 
 * 
 * 
 ********************************/
#include <iostream>

using namespace std;
/********************
 * Function: main
 * Reverses a number entered by a user
 ********************/
int main()
{
    long number {0};
    long rev_number {0};
    long remain {0};
    
    cout << "Enter a number: "<< endl;
    cin >> number;
    while(number>0)
    {
        remain = number %10;
        rev_number = rev_number*10 + remain;
        number = number/10;
    }
    cout <<"\nThe reverse is: " << rev_number << endl;
    return 0;
}