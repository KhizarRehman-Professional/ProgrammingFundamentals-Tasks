/**
 * @file LabTask-Week1-Task1.cpp
 * @author Khizar Reman
 * @brief Program to calculate the sum of two numbers.
 * @details This program takes two numbers as input and displays their sum.
 */
  #include <iostream>
  using namespace std;

  int main(){
  int first_number = 2, second_number = 8, sum;
  // Display Numbers.
  cout << "First Number = ";
  cout << first_number << endl;
  cout << "Second Number = ";
  cout << second_number << endl;
  // Sum of two numbers.
  sum = first_number + second_number;
  // Print Sum 
  cout << "Sum = " << first_number << " + " <<  second_number << " = " << sum << endl;
  return 0;  
  }
