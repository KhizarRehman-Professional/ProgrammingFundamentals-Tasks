/**
 * @file    LabTask-Week2-Task3.cpp
 * @author  Khizar Rehman
 * @brief   A program that swaps two numbers.
 * @details This program will take two numbers as input from the user and
 *          then swap them and display the swapped numbers.
 */
#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    // Get two numbers from the user
    cout << "Enter First Number:  ";
    cin >> num1;
    
    cout << "Enter Second Number: ";
    cin >> num2;

    // Swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    // Display the swapped numbers
    cout << "------------------------------------" << endl;
    cout << "Your First Number is:  " << num1 << endl;
    cout << "Your Second Number is: " << num2 << endl;
    cout << "------------------------------------" << endl;
    return 0;
}
