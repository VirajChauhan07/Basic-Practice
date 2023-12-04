#include<iostream>
using namespace std;

int main(){

    int a ;
    cin >> a;

    // if(a % 2 == 0){
    //     cout<<"a is even"<< endl;
    // }
    // else {
    //     cout<<"a is odd"<< endl;
    // }

    // a % 2 == 0 ? cout<< "Even" : cout<<"ODD";
    // return 0;

    if(a&1){
        cout<< "a is odd"<< endl;
    }
    else{
        cout<<"a is even "<<endl;
    }
}