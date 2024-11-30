/**
 * @file     HomeTask-Week6-Task2.cpp
 * @author   Khizar Rehman
 * @brief    This program checks if three numbers are equal or not.
 * @details  This program prompts the user to enter three numbers. It then
 *           checks if the numbers are equal or not. Depending on the result, the
 *           program displays if the first and second numbers are equal, the
 *           first and third numbers are equal, the second and third numbers
 *           are equal, or all three numbers are equal. If none of the above
 *           conditions are true, the program displays that no numbers are
 *           equal.
 */
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Prompt user to enter three numbers
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Third Number: ";
    cin >> num3;

    // Display a line to separate input and output
    cout << "----------------------------------" << endl;

    // Check if the numbers are equal and display the result
    if (num1 == num2) {
        cout << "The First and Second Numbers are equal." << endl;
        cout << "----------------------------------" << endl;
    } 
    else if (num1 == num3) {
        cout << "The First and Third Numbers are equal." << endl;
        cout << "----------------------------------" << endl;
    } 
    else if (num2 == num3) {
        cout << "The Second and Third Numbers are equal." << endl;
        cout << "----------------------------------" << endl;
    }
    else if (num1 == num2 && num2 == num3) {
        cout << "All Three Numbers are equal." << endl;
        cout << "----------------------------------" << endl;
    } 
    else {
        cout << "No Numbers are equal." << endl;
        cout << "----------------------------------" << endl;
    }
    return 0;
}
