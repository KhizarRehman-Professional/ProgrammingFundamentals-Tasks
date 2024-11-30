/**
 * @file     HomeTask-Week6-Task1.cpp
 * @author   Khizar Rehman
 * @brief    This program calculates the percentage of marks obtained by the user
 *           and displays the grade based on the percentage.
 * @details  This program prompts the user to enter the obtained marks and total
 *           marks. It then displays a menu to the user with two options: to
 *           calculate the percentage of marks obtained or to display the grade
 *           based on the percentage. Depending on the user's choice, the program
 *           either calculates the percentage or determines the grade based on
 *           the percentage.
 */
#include <iostream>
using namespace std;

int main() {
    float obtainedmarks, totalmarks, percentage; // Variables to store obtained marks, total marks and percentage
    int choice; // Variable to store user's choice

    // Prompt user to enter obtained marks
    cout << "Enter your Obtained Marks: ";
    cin >> obtainedmarks;

    // Prompt user to enter total marks
    cout << "Enter the Total Marks: ";
    cin >> totalmarks;

    // Display menu options
    cout << "----------------------------------" << endl;
    cout << "Press 1 to calculate Percentage." << endl;
    cout << "Press 2 to display Grade." << endl;
    cout << "----------------------------------" << endl;

    // Prompt user to enter choice
    cout << "Enter Your Choice: ";
    cin >> choice;
    cout << "----------------------------------" << endl;

    // If user chooses to calculate percentage
    if (choice == 1) {
        percentage = (obtainedmarks / totalmarks) * 100; // Calculate percentage
        cout << "Your Calculated Percentage is: " << percentage << "%\n";
        cout << "----------------------------------" << endl;
    } 
    // If user chooses to display grade
    else if (choice == 2) {
        // Determine grade based on obtained marks
        if (obtainedmarks >= 90) {
            cout << "Your Grade is: A" << endl;
            cout << "----------------------------------" << endl;
        } 
        else if (obtainedmarks >= 80) {
            cout << "Your Grade is: B" << endl;
            cout << "----------------------------------" << endl;
        } 
        else if (obtainedmarks >= 70) {
            cout << "Your Grade is: C" << endl;
            cout << "----------------------------------" << endl;
        } 
        else if (obtainedmarks >= 60) {
            cout << "Your Grade is: D" << endl;
            cout << "----------------------------------" << endl;
        } 
        else {
            cout << "Your Grade is: F" << endl;
            cout << "----------------------------------" << endl;
        }
    } 
    // If user enters an invalid choice
    else {
        cout << "Invalid Input!" << endl;
        cout << "----------------------------------" << endl;
    }

    return 0; // End of program
}
