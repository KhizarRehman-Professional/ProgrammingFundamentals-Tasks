#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "----------------------------------" << endl;
    cout << "Now, your First Number is: " << a << endl;
    cout << "Now, your Second Number is: " << b << endl;
    cout << "----------------------------------" << endl;
    return 0;
}
