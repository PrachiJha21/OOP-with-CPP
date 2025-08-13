// Create a class `BankAccount` that uses a friend function to update balance. Demonstrate
// how friend functions can access private data.

#include<iostream>
using namespace std;

class BankAccount{
    double balance;
    double deposit;
    friend void updateBalance(BankAccount obj);
    public:
        BankAccount(double vall = 0, double sum = 1000): deposit{vall}, balance{sum}{}  
};

void updateBalance(BankAccount obj){
    cout<<"Updated balance is: NRs "<<obj.balance + obj.deposit;
}

int main(){
    BankAccount B1(200);
    updateBalance(B1);
    return 0;
}