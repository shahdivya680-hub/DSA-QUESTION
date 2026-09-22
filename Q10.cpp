#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    // 1. User se input lena
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;


    if (year < 1) {
        cout << "Invalid Date! (enter right year)" << endl;
        return 0;
    }

    if (month < 1 || month > 12) {
        cout << "Invalid Date! (enter right month)" << endl;
        return 0;
    }


    int maxDays = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30; 
    } 
    else if (month == 2) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            maxDays = 29; 
        } else {
            maxDays = 28; 
        }
    }

    
    if (day < 1 || day > maxDays) {
        cout << "Invalid Date! (In this month " << maxDays << " maximum)" << endl;
    } else {
        cout << "Valid Date! (your date of birth is right)" << endl;
    }

    return 0;
}



    
   
