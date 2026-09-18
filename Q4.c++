#include<iostream>
using namespace std;
int main () {
    int n;
    cout <<("enter amount:" );
    cin>>n;
    n = n - n/10;
     n = n + n*18/100;
    cout<<"final price ="<<n<<endl ;


}