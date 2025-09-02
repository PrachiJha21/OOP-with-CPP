/*Create a program that illustrates type conversion: (a) Basic to Class type (b) Class to
Basic type (c) Class to Class. Use a class `Distance`.*/

#include<iostream>
using namespace std;

class Convert{
    int x;
    public:
        Convert(int val){
            x = val;
        }
        void display_convert(){
            cout<<"It is of convert type"<<endl;
        }
};

class Distance{
    int feet;
    float inch;
    public:
        Distance(int f, float i): feet{f}, inch{i}{}
        operator int(){
            return feet;
        }
        operator float(){
            return inch;
        }
       

};

int main(){
    // (a) Basic → Class
    Convert n = 10;     
    n.display_convert();

    // (b) Class → Basic
    Distance D1(2.9, 9); 
    int f = D1;         // uses operator int()
    float i = D1;       // uses operator float()

    cout << "Converted to int (feet): " << f << endl;
    cout << "Converted to float (inch): " << i << endl;

    return 0;
}
