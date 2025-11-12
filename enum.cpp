// NOT IN LABS
#include <iostream>
using namespace std;

// Defining enum
enum fruit {
    APPLE, BANANA = 5, ORANGE       //By default first one in an enum is assigned the value of 0 and the subsquent ones are incremented by 1. 
};

int main() {

    // Creating enum variable
    fruit f = BANANA;
    cout << f << endl;      //prints 5
    
    // Changing the value
    f = ORANGE;
    cout << f<< endl;       //prints 6

    f = APPLE;
    cout<<f;                //prints 0
    return 0;
}
