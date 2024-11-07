/**
 * @file    HomeTask-Week3-Task1.cpp
 * @author  Khizar Rehman
 * @brief   A C++ Program to convert Celcius to Farhenhiet
 * @details This program will take Celcius as an input and convert it to Farhenhiet
 */

#include <iostream>
using namespace std;

int main() {
    float celsius, farhenhiet;

    // Ask user for the Celcius value
    cout << "Enter the Celcius: ";
    cin >> celsius;

    // Convert Celcius to Farhenhiet
    farhenhiet = 1.8 * celsius + 32;

    // Display the result
    cout << "----------------------------------" << endl;
    cout << "The Farhenhiet is: " << farhenhiet << endl;
    cout << "----------------------------------" << endl;
    
    return 0;
}
