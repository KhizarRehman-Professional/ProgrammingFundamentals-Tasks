/**
 * @file    HomeTask-Week2-Task3.cpp
 * @author  Khizar Rehman
 * @brief   This program calculates the area and perimeter of a rectangle.
 * @details The program prompts the user to input the length and width of a rectangle,
 *          then calculates and displays the area and perimeter.
 */
#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;
    // Prompt the user to enter the length of the rectangle
    cout << "Enter the length of rectangle: ";
    cin >> length;

    // Prompt the user to enter the width of the rectangle
    cout << "Enter the width of rectangle: ";
    cin >> width;

    // Calculate the area of the rectangle
    area = length * width;

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (length + width);

    // Print the calculated area and perimeter of the rectangle
    cout << "----------------------------------" << endl;
    cout << "The area of rectangle is: " << area << endl;
    cout << "The perimeter of rectangle is: " << perimeter << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
