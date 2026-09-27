#include <iostream>


using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    bool isPrime = true;

    if (N <= 1) {
        isPrime = false;
    } else {
        
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << N << " is a Prime Number" << endl;
    } else {
        cout << N << " is not a Prime Number" << endl;
    }

    return 0;
}
