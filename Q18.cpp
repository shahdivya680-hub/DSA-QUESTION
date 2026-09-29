#include <iostream>
using namespace std;

int main() {
    int total_sum = 0;
    int val;
    char ch;

    
    while (cin >> val) {
        if (val <= 0) break;
        total_sum += val;
        
        if (cin.peek() == ',') {
            cin >> ch; 
        }
    }

    cout << "Sum before break: " << total_sum << endl;
    return 0;
}
