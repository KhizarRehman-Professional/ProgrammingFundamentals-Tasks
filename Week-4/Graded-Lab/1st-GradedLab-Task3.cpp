/**
 * @file     1st-GradedLab-Task3.cpp
 * @author   Khizar Rehman
 * @brief    Program to swap two numbers
 * @details  This program will take two numbers as input from the user and then swap their values and display the result.
 */
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;

    // Ask the user to enter two numbers
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    // Swap the values of the two numbers
    temp = a;
    a = b;
    b = temp;

    // Print the swapped numbers
    cout << "----------------------------------" << endl;
    cout << "Now, your First Number is: " << a << endl;
    cout << "Now, your Second Number is: " << b << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
