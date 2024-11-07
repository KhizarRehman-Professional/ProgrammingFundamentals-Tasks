/**
 * @file    LabTask-Week3-Task1.cpp
 * @author  Khizar Rehman
 * @brief   This program calculates the circumference of a circle.
 * @details The program asks the user radius of the circle and then calculates the circumference.
 */

#include <iostream>
using namespace std;

int main() {
    float pi = 3.14, radius, circumference;

    // Ask the user to enter the radius of the circle
    cout << "Enter the radius of circle: ";
    cin >> radius;

    // Calculate the circumference of the circle
    circumference = 2 * pi * radius;

    // Print the result
    cout << "----------------------------------" << endl;
    cout << "The circumference of circle is: " << circumference << endl; 
    cout << "----------------------------------" << endl;

    return 0;
}
