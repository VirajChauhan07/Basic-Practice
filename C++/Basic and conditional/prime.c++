#include <iostream>
using namespace std;

int main()
{

    int num , i = 1, j, count;
    cout<<"Enter any number  to find the prime factors :";
    cin>>num;
    while(i<=num){
        count = 0;
        if(num % i == 0){
            j = 1;
            while(j<=i){
                if(i%j == 0){
                    count++;
                }
                j++;
            }
            if(count == 2){
                cout<< i << " is a prime factor of "<< num <<endl;
            }
        }
    i++;
    }

    return 0;
}