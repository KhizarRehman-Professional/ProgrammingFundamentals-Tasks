/**
 * @file     LabTask-Week5-Task1.cpp
 * @author   Khizar Rehman
 * @brief    This program takes two numbers as input and performs a series
 *           of calculations on the numbers.
 * @details  The following calculations are performed on the numbers:
 *           1. Addition
 *           2. Subtraction
 *           3. Multiplication
 *           4. Division
 *           5. Modulus
 */
#include <iostream>
using  namespace std;

int main(){
    int num1, num2;
    
    // Ask the user for two numbers
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    
    // Perform calculations and print the results
    cout << "----------------------------------" << endl;
    cout << "The addition of numbers are: " << num1 + num2 << endl;
    cout << "The subtraction of numbers are: " << num1 - num2 << endl;
    cout << "The multiplication of numbers are: " << num1 * num2 << endl;
    cout << "The division of numbers are: " << num1 / num2 << endl;
    cout << "The modulus of numbers are: " << num1 % num2 << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
