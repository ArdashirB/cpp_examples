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
 * Example operations on an array / demonstrations of operations on vectors
 ********************/
int main() 
{
    //----WRITE YOUR CODE BELOW THIS LINE----
    vector <int> vec {1,2,3};
    int  result {0};
    cout << "Enter the elements of a vector "<<endl;
    cin >> vec[0]; 
    cin >> vec[1];
    cin >> vec[2]; 
//    cout<<vec.at(0);
//    for(size_t i =0; i<vec.size(); i++)
//    {
//        for(size_t j =0; j<vec.size(); j++)
//        {
//               result = result + vec.at(i) * vec.at(j);
//        }
//        
//    }
     cout << result<< endl;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return 0;
}