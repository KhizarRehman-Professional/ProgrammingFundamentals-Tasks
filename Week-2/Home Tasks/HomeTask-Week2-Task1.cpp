/**
 * @file    HomeTask-Week2-Task1.cpp
 * @author  Khizar Rehman
 * @brief   This program calculates the total marks of six subjects.
 * @details This program takes the marks of six subjects as input and calculates the total marks.
 */

#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5, s6, sum;

    // Prompt the user to enter the marks of six subjects
    cout << "Enter the marks of Urdu: ";
    cin >> s1;
    cout << "Enter the marks of Maths: ";
    cin >> s2;
    cout << "Enter the marks of English: ";
    cin >> s3;
    cout << "Enter the marks of Physics: ";
    cin >> s4;
    cout << "Enter the marks of Islamiyat: ";
    cin >> s5;
    cout << "Enter the marks of Computer Science: ";
    cin >> s6;

    // Calculate the total marks
    sum = s1 + s2 + s3 + s4 + s5 + s6;

    // Print the total marks
    cout << "----------------------------------" << endl;
    cout << "The Total Marks are: " << sum << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
