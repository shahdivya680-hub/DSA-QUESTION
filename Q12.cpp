#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    switch (n)
    {
    case 1:
    case 2:
    case 12:
        cout << "season: " << "winter" << endl;
        break;

    case 3:
    case 4:
    case 5:
        cout << "season: " << "spring" << endl;
        break;

    case 6:
    case 7:
    case 8:
        cout << "season: " << "summer" << endl;
        break;

    case 9:
    case 10:
    case 11:
        cout << "season: " << "monsoon" << endl;
        break;

    default:
        cout << "enter valid number" << endl;
    }
}