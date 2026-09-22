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

    // 2. Year aur Month check karna
    if (year < 1) {
        cout << "Invalid Date! (Year galat hai)" << endl;
        return 0; // Program yahi khatam ho jayega
    }

    if (month < 1 || month > 12) {
        cout << "Invalid Date! (Month galat hai)" << endl;
        return 0;
    }

    // 3. Har mahine ke din tay karna (By default February me 28 din)
    int maxDays = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30; // April, June, September, November me 30 din hote hain
    } 
    else if (month == 2) {
        // Leap year check karne ka simple tarika
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            maxDays = 29; // Leap year me Feb me 29 din
        } else {
            maxDays = 28; // Normal year me Feb me 28 din
        }
    }

    // 4. Day check karna
    if (day < 1 || day > maxDays) {
        cout << "Invalid Date! (Is mahine me " << maxDays << " se zyada din nahi hote)" << endl;
    } else {
        cout << "Valid Date! (Aapki date bilkul sahi hai)" << endl;
    }

    return 0;
}



    
   
