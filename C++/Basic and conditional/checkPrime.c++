#include<iostream>
using namespace std;

bool isPrime(int n){
// Check whether number is less then or equal to 1

    if(n <= 1){
        return false;
    }
// start the loop with i = 2 till n/2
    for(int i = 2; i<=n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    isPrime(11) ? cout<<"true\n":cout<<"false\n";
    return 0;
}