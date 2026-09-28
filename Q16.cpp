#include <iostream>

using namespace std;

int main() {
    int n;
   
    if (!(cin >> n)) ;

    
    if (n < 0) {
        cout << "Not Palindrome" << endl;
    
    }

    int original = n;
    long long rev = 0; 

  
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    
    if (original == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

   
}


