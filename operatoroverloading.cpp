// Write a C++ program to demonstrate overloading of both unary (`++`) and binary (`+`)
// operators using a class `Counter`.

#include<iostream>
using namespace std;

class Counter{
    int real;
    int img;
    public:
        Counter(int r=0, int i = 0): real{r}, img{i}{}
        // void operator++(){              //unary operator overloading
        //     real++;
        //     img++;
        //     cout<<"The Complex Number is: " <<real << " + i"<<img<<endl;
        // }
        void display() {
        cout <<"The New Complex Number is: " <<real << " + i" << img <<endl;
        }

        Counter operator+(Counter &C){          //binary operator overloading
            Counter C4;
            C4.real = real + C.real;
            C4.img = img + C.img;
            return C4;
        }
};
int main(){
    Counter C1(20,30), C2(40,50);
    //++C1; //unary
    Counter C3;
    C3 = C1 + C2;
    C3.display();
    return 0;
}