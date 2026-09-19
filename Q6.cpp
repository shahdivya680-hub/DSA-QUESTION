#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter a,b,c: ";
    cin >>a>>b>>c;
    if(a>b){
        if(a>c) {
    cout<<a<<" is greatest number"<<endl;}
    else {
        cout<<c<<" is greatest number"<<endl;
    }
} else cout<<b<<" is greatest number"<<endl;
    

}
