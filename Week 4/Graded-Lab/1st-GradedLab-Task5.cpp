#include <iostream>

using namespace std;

int main()
{
    int ascii;

    cout << "Enter the ASCII: ";
    cin >> ascii;

    cout << "The Next Five ASCII characters are: " << endl;
    cout << "----------------------------------" << endl;
    cout << "     " << char(ascii + 1) << ",   ";
    cout << char(ascii + 2) << ",   ";
    cout << char(ascii + 3) << ",   ";
    cout << char(ascii + 4) << ",   ";
    cout << char(ascii + 5) << "." << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
