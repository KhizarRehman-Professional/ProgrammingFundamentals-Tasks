/**
 * @file     LabTask-Week5-Task4.cpp
 * @author   Khizar Rehman
 * @brief    This program takes the total number of students, the number of boys
 *           and the number of boys with grade 'A' as input and then calculates
 *           the number of girls with grade 'A'.
 * @details  The following calculations are performed on the input numbers:
 *           1. The number of girls is calculated by subtracting the number of
 *              boys from the total number of students.
 *           2. The total number of students with grade 'A' is calculated by
 *              multiplying the total number of students with the percentage of
 *              students with grade 'A'.
 *           3. The number of girls with grade 'A' is calculated by subtracting
 *              the number of boys with grade 'A' from the total number of
 *              students with grade 'A'.
 */
#include <iostream>
using namespace std;

int main(){
    int totalstudents = 45, totalboys = 25, boyswithA = 17, totalAgrade, totalgirls, girlswithA;
    float Apercentage = 80.0;

    // Calculate the number of girls
    totalgirls = totalstudents - totalgirls;

    // Calculate the total number of students with grade 'A'
    totalAgrade = (Apercentage / 100) * totalstudents;

    // Calculate the number of girls with grade 'A'
    girlswithA = totalAgrade - boyswithA;

    cout << "----------------------------------" << endl;
    cout << "The number of girls getting grade 'A' are: " << girlswithA << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
