#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // Static data member declaration

    // Constructor
    MyClass() {
        count++; // Increment the shared counter for every new object
    }

    // Static member function
    static void showCount() {
        // Can only access static members
        cout << "Total objects created: " << count << endl;
        // cout << x; // ERROR: Cannot access non-static member 'x'
    }

private:
    int x; // Non-static member
};

// Definition and initialization of the static member
int MyClass::count = 0;

int main() {
    // Calling static function without any object
    MyClass::showCount(); // Output: Total objects created: 0

    MyClass obj1, obj2, obj3; // Create 3 objects

    // Calling static function using class name
    MyClass::showCount(); // Output: Total objects created: 3

    // Calling static function using an object (also allowed)
    obj1.showCount(); // Output: Total objects created: 3

    // Accessing static data member (usually done via function)
    cout << "Count is: " << MyClass::count; // Output: Count is: 3

    return 0;
}