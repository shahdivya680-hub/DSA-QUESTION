#include <iostream>
using namespace std;
int main() {
    float w, h;
    cin >> w >> h;
    float bmi = w / (h * h);
    cout.precision(2);
    cout << fixed;
    cout << "BMI: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else {
        if (bmi < 25.0) {
            cout << "Category: Normal weight" << endl;
        } else {
            if (bmi < 30.0) {
                cout << "Category: Overweight" << endl;
            } else {
                cout << "Category: Obese" << endl;
            }
        }
    }
}