// Write a function power(base, exponent) where:

// exponent has a default value of 2 (so if not given, it calculates the square).

// Ask the user for the base, and optionally the exponent.

// Test both with and without passing the exponent.

#include<iostream>
using namespace std;

int answer(int base, int exp = 2){
    if(exp>1){
        return base * answer(base, exp-1);
    }
    if(exp==1){
        return base;
    }
    if(exp == 0){
        return 1;
    }
}
int main(){
    cout<<answer(3)<<endl;
    cout<<answer(2,4);
    return 0;
}