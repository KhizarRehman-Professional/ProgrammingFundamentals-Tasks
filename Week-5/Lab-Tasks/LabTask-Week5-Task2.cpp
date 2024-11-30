/**
 * @file     LabTask-Week5-Task2.cpp
 * @author   Khizar Rehman
 * @brief    This program takes a four-digit number as input and increments each
 *           digit in the number by one.
 * @details  The program takes a four-digit number from the user and then
 *           extracts the individual digits from the number. After that, it
 *           increments each digit in the number by one and then stores the
 *           result in a variable. Finally, it displays the result.
 */
#include <iostream>
using namespace std;

int main(){
    int num, digit1, digit2, digit3, digit4, result;

    // Ask the user for a four-digit number
    cout << "Enter the four-digit number: ";
    cin >> num;

    // Extract the individual digits from the number
    digit1 = (num / 1000) % 10;
    digit2 = (num / 100) % 10;
    digit3 = (num / 10) % 10;
    digit4 = (num % 10);

    // Increment each digit in the number by one
    digit1 = (digit1 + 1) % 10;
    digit2 = (digit2 + 1) % 10;
    digit3 = (digit3 + 1) % 10;
    digit4 = (digit4 + 1) % 10;

    // Store the result in a variable
    result = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    // Print the result
    result = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4; 
    cout << "----------------------------------" << endl;
    cout << "The number after increment in number are: " << result << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
