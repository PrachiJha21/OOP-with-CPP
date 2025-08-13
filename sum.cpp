#include<iostream>
using namespace std;

class A;
class B {
    int b;
public:
    B(int val) : b(val) {}
    friend void showsSum(A, B);
};

class A {
    int a;
public:
    A(int val) : a(val) {}
    friend void showsSum(A, B);
};

void showsSum(A obj1, B obj2) {
    cout << "Sum = " << obj1.a + obj2.b;
}

int main(){
    showsSum(4,3);
    return 0;
}