/**
 * @file     1st-GradedLab-Task6.cpp
 * @author   Khizar Rehman
 * @brief    Program to calculate total seconds from given time
 * @details  This program takes a time in hours, minutes and seconds as
 *           input from the user and then calculates the total seconds.
 */
#include <iostream>
using namespace std;

int main()
{
    int hour, minute, second;

    // Ask the user to enter the time
    cout << "Enter Hour: ";
    cin >> hour;
    cout << "Enter Minute: ";
    cin >> minute;
    cout << "Enter Second: ";
    cin >> second;

    // Calculate the total seconds
    hour = hour * 3600;
    minute = minute * 60;
    second = hour + minute + second;
    
    // Display the total seconds
    cout << "----------------------------------" << endl;
    cout << "The total seconds are: " << second << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
