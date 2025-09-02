// Create a class `BankAccount` that uses a friend function to update balance. Demonstrate
// how friend functions can access private data.

#include<iostream>
 using namespace std;

class BankAccount{
    double balance;
    double deposit;
    public:
        BankAccount(double vall, double sum=0.0): deposit{vall}, balance{sum}{}  
        friend void updateBalance(BankAccount &obj);
};

void updateBalance(BankAccount &obj){
    cout<<"Balance:"<<obj.balance<<endl;
    cout<<"Deposit:"<<obj.deposit<<endl;
    obj.balance += obj.deposit;   
    cout<<"Updated balance is: NRs "<<obj.balance;
}

int main(){
    double deposit_amount;
    cout<<"Enter deposit amount"<<endl;
    cin>>deposit_amount;
    BankAccount B1(deposit_amount);
    updateBalance(B1);
    return 0;
}
