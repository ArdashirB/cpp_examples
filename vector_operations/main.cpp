/********************************
 * author: Ardashir Bulsara
 * reference: 
 * 
 * 
 ********************************/
#include <iostream>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;
/********************
    This program is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    The program will display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit
 ********************/
int main()
{
    int temp {}, sum{};    
    char selection {};
    vector <int> vec {1,2,3};
    do
    {
        cout<< "Menu: " << endl;
        cout<< "P - Print numbers" << endl;
        cout<< "A - Add a number" << endl;
        cout<< "M - Display mean of the numbers " << endl;
        cout<< "S - Display the smallest number" << endl;
        cout<< "L - Display the largest number " << endl;
        cout<< "Q - Quit" << endl;
        cin>>selection;
        
        if(selection=='A' || selection=='a')
        {
            cout<<"What number do you want to add?\n:";
            cin>>temp;
            if (cin)
            {
                vec.push_back(temp);
            }
            else
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
                cout<<"Illegal input!!"<<endl;
                continue;
            }
        }
        
        else if (selection=='P' || selection=='p')
        {
            if (vec.size() == 0)
                continue;
            else
            {
                cout<<"[ ";
                for ( unsigned int i{0}; i<vec.size(); i++)
                {
                    cout<<vec.at(i)<<" ";
                }
                cout<<"]"<<endl;
            }
                
        }
        
        else if(selection=='M' || selection=='m')
        {
            sum=accumulate(vec.begin(), vec.end(), 0);
            cout<< "The mean is: "<< static_cast <float> (sum)/vec.size()<<endl;
        }
        
       else if(selection=='S' || selection=='s')
        {
            cout<<"The smallest number is:  "<<*min_element(vec.begin(), vec.end())<<endl;
        }
        
        else if(selection=='L' || selection=='l')
        {
            cout<<"The largest number is:  "<<*max_element(vec.begin(), vec.end())<<endl;
        }
        else
            cout<<"Illegal entry, please try again."<<endl;
    }while(selection != 'Q' && selection !='q');
    return 0;
}