#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    printf("Enter Three Numbers : ");
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << endl;
    else if (b > c && b > a)
        cout << b << endl;
    else
        cout << c << endl;
    return 0;
}