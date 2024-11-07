/**
 * @file    LabTask-Week3-Task2.cpp
 * @author  Khizar Rehman
 * @brief   Main function that reads an ASCII value and outputs the next five characters.
 * @details The program prompts the user to enter an ASCII value and then outputs the next five characters based on the ASCII value.
 */

#include <iostream>
using namespace std;

int main() {
    // Variable to store the ASCII value input by the user
    int ascii;

    // Prompt the user to enter an ASCII value
    cout << "Enter an ASCII value: ";
    cin >> ascii;

    // Output the next five characters based on the ASCII value
    cout << "-----------------------------------------------" << endl;
    cout << "Next five characters are: ";
    cout << (char)(ascii + 1) << ", ";
    cout << (char)(ascii + 2) << ", ";
    cout << (char)(ascii + 3) << ", ";
    cout << (char)(ascii + 4) << ", ";
    cout << (char)(ascii + 5) << ".";
    cout << "\n---------------------------------------------" << endl;
    
    // Indicate successful termination
    return 0; 
}
