#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter Two Numbers : ";
    cin >> a >> b;
    cout << "Enter the Operator : ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Result : " << a + b;
        break;
    case '-':
        cout << "Result : " << a - b;
        break;
    case '*':
        cout << "Result : " << a * b;
        break;
    case '/':
        cout << "Result : " << a / b;
        break;
    default:
        cout << "Invalid Operator !";
    }
    return 0;
}