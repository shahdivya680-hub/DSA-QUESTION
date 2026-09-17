#include<iostream>
using namespace std;
int main() {
    bool light = true;
      cout << (light == true ? " on ": " off ") <<endl;
      light =! light;
      cout<< (light ? "on" : "off")<<endl;

    return 0;
}