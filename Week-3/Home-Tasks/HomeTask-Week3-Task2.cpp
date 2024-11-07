/**
 * @file    HomeTask-Week3-Task2.cpp
 * @author  Khizar Rehman
 * @brief   A C++ Program to convert Time to Seconds
 * @details This program will take Hours, Minutes and Seconds as an input and convert them to total number of seconds
 */

#include <iostream>
using namespace std;

int main() {
    int hour, minute, second;

    // Ask user for the time
    cout << "Enter Hours: ";
    cin >> hour;
    cout << "Enter Minutes: ";
    cin >> minute;
    cout << "Enter Seconds: ";
    cin >> second;

    // Convert the time to total number of seconds
    hour = 3600 * hour;
    minute = minute * 60;
    second = hour + minute + second;

    // Display the result
    cout << "----------------------------------" << endl;
    cout << "The total time in seconds are: " << second << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
