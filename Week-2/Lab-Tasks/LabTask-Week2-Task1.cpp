/**
 * @file    LabTask-Week2-Task1.cpp
 * @author  Khizar Rehman
 * @brief   A program that takes user input and displays it. 
 * @details This program will take user input for their id, first name, and course name. 
 *          It will then display the input back to the user.
 */
#include <iostream>
using namespace std;

int main() {
    string id, name, course_name;
    
    // Get user input
    cout << "Enter your Id: ";
    getline(cin, id);
    
    cout << "Enter your First Name: ";
    getline(cin, name);
    
    cout << "Enter your Course Name: ";
    getline(cin, course_name);

    // Display user input
    cout << "----------------------------------------------" << endl;
    cout << "Your Id is: " << id << endl;
    cout << "Your First Name is: " << name << endl;
    cout << "Your Course Name is: " << course_name << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}
