#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter Your Year : ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << year << " is a Leap Year.\n";
    else
        cout << year << " is not a Leap Year";
    return 0;
}