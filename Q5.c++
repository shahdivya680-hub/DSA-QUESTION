#include<iostream>
using namespace std;
int main(){
    float ab;
    int wa;
    int r;
    cin>>ab>>wa;
    r=ab-(wa+1);
    if( wa > 0 && wa % 1==0 && ab >= wa+1){
        //1 rupee is transtion fee
    cout<<"transition valid : true"<<endl;
    cout<<"reamaning :"<<r<<endl;}
    else{
        cout<<"invalid"<<endl;
    }

  
    
    return 0;
}
