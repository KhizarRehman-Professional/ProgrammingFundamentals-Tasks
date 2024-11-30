/**
 * @file     LabTask-Week5-Task3.cpp
 * @author   Khizar Rehman
 * @brief    This program takes a three-digit number as input and displays the
 *           sum of its individual digits.
 * @details  The program takes a three-digit number from the user and then
 *           extracts the individual digits from the number. Finally, it
 *           displays the sum of the individual digits of the number.
 */
#include <iostream>
using namespace std;

int main(){
    int num, digit1, digit2, digit3;

    // Ask the user for a three-digit number
    cout << "Enter three digit number: ";
    cin >> num;

    // Extract the individual digits from the number
    digit1 = (num / 100) % 10;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    // Print the sum of the individual digits
    cout << "----------------------------------" << endl;
    cout << "The sum of numbers is: "<< digit1 + digit2 + digit3 << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
