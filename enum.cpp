#include <iostream>
using namespace std;

// Defining enum
enum fruit {
    APPLE, BANANA = 5, ORANGE
};

int main() {

    // Creating enum variable
    fruit f = BANANA;
    cout << f << endl;
    
    // Changing the value
    f = ORANGE;
    cout << f<< endl;

    f = APPLE;
    cout<<f;
    return 0;
}