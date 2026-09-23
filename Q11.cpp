#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << " enter first number ";
    cin >> a;
    cout << " enter second number ";
    cin >> b;
    cout << "enter a operator ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;

    case '%':
        cout << a << " % " << b << " = " << a % b << endl;
        break;

    default:
        cout << "enter valid operator" << endl;
        break;
    }
}