/**
 * @file     1st-GradedLab-Task4.cpp
 * @author   Khizar Rehman
 * @brief    Program to determine the size of an int
 * @details  This program calculates and displays the size of the int data type in bytes.
 */

#include <iostream>
using namespace std;    

int main()
{
    // Declare a variable to store the size of int
    int b;

    // Calculate the size of int in bytes
    b = sizeof(int);

    // Display the size of int
    cout << "----------------------------------" << endl;
    cout << "The Size of Int is: " << b << " Bytes" << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
