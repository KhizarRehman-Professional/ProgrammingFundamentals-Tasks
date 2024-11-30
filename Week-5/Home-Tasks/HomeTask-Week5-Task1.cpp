/**
 * @file     HomeTask-Week5-Task1.cpp
 * @author   Khizar Rehman
 * @brief    This program takes a four-digit number as input and performs a series
 *           of calculations to obtain a final result.
 * @details  The following calculations are performed on the input number:
 *           1. Add 8 to the number.
 *           2. Divide the number by 3.
 *           3. Take the modulus of the number with 5.
 *           4. Multiply the number by 5.
 */
#include <iostream>
using namespace std;

int main(){
    int number;

    // Ask the user for a four-digit number
    cout << "Enter a four-digit number: ";
    cin >> number;

    // Perform the calculations
    number = number + 8; // Add 8 to the number
    number = number / 3; // Divide the number by 3
    number = number % 5; // Take the modulus of the number with 5
    number = number * 5; // Multiply the number by 5
    
    // Print the final result
    cout << "----------------------------------" << endl;
    cout << "The final result is: " << number << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
