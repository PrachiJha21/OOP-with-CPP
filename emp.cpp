// Write a C++ program using a class `Employee` with data members `emp_id`, `name`, and
// `salary`. Include parameterized constructor, display function, and destructor.

#include<iostream>
using namespace std;

class Employee{
    int emp_id;
    double salary;
    string name;
    public:
        Employee(int id, double money, string n){       //parameterized constructor
            emp_id = id;
            salary = money;
            name = n;
        }

            
        void display(){
                cout<<"Employee Information:\n";
                cout<<"Name of the employee: "<<name<<endl<<"Employee ID: "<<emp_id<<endl<<"Salary: "<<salary<<endl;
        }
        ~Employee(){
            cout<<"Logging out";            //invoked at the very end of the program
        }
};

int main(){
    Employee e1(1000, 200000.0, "Ram");                 
    e1.display();
    return 0;
}