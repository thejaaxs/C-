#include <iostream>
using namespace std;

int main()
{
    int year;
    printf("Enter The Year : ");
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;
    return 0;
}