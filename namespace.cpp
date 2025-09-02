#include<iostream>
using namespace std;

namespace first{
    void fun(){
        cout<<"I love listening to music";
    }
}

int main(){
    first::fun();
}