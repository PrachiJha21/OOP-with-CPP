// Write three overloaded functions named area:

// area(int side) → calculates area of a square.

// area(int length, int breadth) → calculates area of a rectangle.

// area(double radius) → calculates area of a circle.
#include<iostream>
using namespace std;

int area(int side){
    return side * side;
}

int area(int length, int breadth){
    return length * breadth;
}

double area(double radius){
    return 3.1415 * radius * radius;
}

int main(){
    cout<<area(2)<<endl;
    cout<<area(2,3)<<endl;
    cout<<area(4.00);
    return 0;
}