/*
* File: MinimumMaximum
* Programmer: Sarah Roberts
* Date: 10/3/2025
*/
//This program is designed to determine which number is the smaller and which is the larger.


#include <iostream>
using namespace std; 

int main()
{
    //getting numbers
    double num1, num2; 
    cout << "Please enter the first number : "; 
    cin >> num1; 
    cout << "Please enter the second number : "; 
    cin >> num2; 

    //using conditional operator extablishing which # is smaller/larger =
    double smaller = (num1 < num2) ? num1 : num2 ; 
    double larger = (num1 > num2) ? num1 : num2; 

    //displaying results 
    cout << "The smaller number is : " << smaller << endl; 
    cout << "The larger number is : " << larger << endl; 
    

    return 0;
    
}



