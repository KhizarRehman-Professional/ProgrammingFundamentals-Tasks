#include <iostream>

using namespace std;

int main()
{
    int hour, minute, second;

    cout << "Enter Hour: ";
    cin >> hour;
    cout << "Enter Minute: ";
    cin >> minute;
    cout << "Enter Second: ";
    cin >> second;

    hour = hour * 3600;
    minute = minute * 60;

    second = hour + minute + second;
    
    cout << "----------------------------------" << endl;
    cout << "The total seconds are: " << second << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
