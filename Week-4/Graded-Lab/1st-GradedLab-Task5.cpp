/**
 * @file     1st-GradedLab-Task5.cpp
 * @author   Khizar Rehman
 * @brief    Program to print the next five ASCII characters
 * @details  This program takes an ASCII code as input from the user and
 *           prints the next five ASCII characters.
 */ 

#include <iostream>
using namespace std;

int main()
{
    int ascii;

    // Ask the user to input an ASCII code
    cout << "Enter the ASCII: ";
    cin >> ascii;

    // Print the next five ASCII characters
    cout << "The Next Five ASCII characters are: " << endl;
    cout << "----------------------------------" << endl;
    cout << "     " << char(ascii + 1) << ",   ";
    cout << char(ascii + 2) << ",   ";
    cout << char(ascii + 3) << ",   ";
    cout << char(ascii + 4) << ",   ";
    cout << char(ascii + 5) << "." << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
