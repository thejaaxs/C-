#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
            cout << a / b;
        else
            cout << "Division By Zero Error !";
        break;
    default:
        cout << "Invalid Operator !";
    }
    cout << endl;
    return 0;
}