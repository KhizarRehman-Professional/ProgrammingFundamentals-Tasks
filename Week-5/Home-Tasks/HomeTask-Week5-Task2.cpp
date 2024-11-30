/**
 * @file     HomeTask-Week5-Task2.cpp
 * @author   Khizar Rehman
 * @brief    This program takes a four-digit number as input and displays the
 *           individual digits of the number.
 * @details  The program takes a four-digit number from the user and then
 *           extracts the individual digits from the number. Finally, it
 *           displays the individual digits of the number.
 */
#include <iostream>
using namespace std;

int main(){
    int number, digit1, digit2, digit3, digit4;

    // Ask the user for a four-digit number
    cout << "Enter four digit number: ";
    cin >> number;

    // Extract the individual digits from the number
    digit1 = (number / 1000) % 10;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = (number % 10);

    // Print the individual digits
    cout << "----------------------------------" << endl;
    cout << "The numbers are: " << endl;
    cout << digit1 << endl;
    cout << digit2 << endl;
    cout << digit3 << endl;
    cout << digit4 << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
