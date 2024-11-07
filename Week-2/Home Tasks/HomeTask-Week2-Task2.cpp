/**
 * @file    HomeTask-Week2-Task2.cpp
 * @author  Khizar Rehman
 * @brief   This program calculates the size of an integer in bytes.
 * @details This program uses the sizeof() operator to calculate the size of an integer (int) in bytes.
 */

#include <iostream>
using namespace  std;

int main() {
    int a;
    // Calculate the size of an integer in bytes
    a = sizeof(int);
    // Print the size of an integer in bytes
    cout << "The size of an Integer (int) is: " << a << " Bytes" << endl;
    
    return 0;
}
