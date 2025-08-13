// Write an inline function maxOfThree(a, b, c) that returns the largest of three numbers.
// Then:

// Call it for three integers entered by the user.

// Test it for at least three different sets of numbers.

#include<iostream>
using namespace std;

inline int maxofThree(int a,int b,int c){
    if(a> b && a >c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else
        return c;
}

int main(){
    cout<<maxofThree(10,4,7);
    return 0;
}