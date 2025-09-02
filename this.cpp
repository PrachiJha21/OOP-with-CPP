#include <iostream>
using namespace std;

class Test {
private:
    int x;
public:
    // Using 'this' pointer to resolve name conflict
    void setX(int x) {
        // 'this->x' refers to the class member 'x'
        // 'x' refers to the function parameter 'x'
        this->x = x;
    }

    void print() {
        cout << "x = " << x << endl;
        // cout << "this->x = " << this->x << endl; // Same as above
        // cout << "Address of this object is: " << this << endl;
    }
};

int main() {
    Test obj1, obj2;

    obj1.setX(5);
    obj2.setX(10);

    obj1.print(); // Output: x = 5
    obj2.print(); // Output: x = 10

    return 0;
}