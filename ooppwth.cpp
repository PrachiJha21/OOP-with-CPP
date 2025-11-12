// NOT FOR LABS
#include<iostream>
using namespace std;

int main(){
const int a = 10;
const int b = 20;
const int *ptr = &a;  // OK

cout<< *ptr <<endl;
//*ptr = 5;      // ❌ ERROR! You can't change value of a through ptr
ptr = &b;   // ✅ OK! You can point to another const int

cout<< *ptr;
}
