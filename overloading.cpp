// Write three overloaded functions named area:
// area(int side) → calculates area of a square.
// area(int length, int breadth) → calculates area of a rectangle.
// area(double radius) → calculates area of a circle.
#include<iostream>
#include<cmath>
using namespace std;
class Area{
public:
    int area(int side){
        return side * side;
    }

    int area(int length, int breadth){
        return length * breadth;
    }
    
    double area(double radius){
        return M_PI * radius * radius;
    }
};

int main(){
    Area A;
    cout<<A.area(2)<<endl;
    cout<<A.area(2,3)<<endl;
    cout<<A.area(4.00);
    return 0;
}
