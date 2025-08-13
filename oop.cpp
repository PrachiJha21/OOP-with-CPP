#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //non-parameterized
    // Teacher(){
    //     dept = "Computer Science";
    // }

    //parameterized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subjects = s;
        salary = sal;
    }

    //copy constructor
    Teacher(Teacher &originalobj){  //pass by reference
        cout<<"I am custom copy constructor....\n";
        this->name = originalobj.name;
        this->dept = originalobj.dept;
        this->subjects = originalobj.subjects;
        this->salary = originalobj.salary;
    }
    //properties or attributes
    string name;
    string dept;
    string subjects;

    //methods or member functions
    void changedept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary = s;
    } 
    //getter
    double getSalary(){
        return salary;
    }

    void getInfo(){
    cout<<"Name: "<< name<<endl<<"Subject: "<<subjects<<endl;
    }
};

// class Account{
// private:                //data hiding
//     double balance;
//     string password;

// public:
//     string username;
//     int accountnumber;
// };


int main(){
    Teacher t1("Prachi", "Computer Science", "C++", 25000000); //constructor call
    //t1.getInfo();


    Teacher t2(t1); //Custom copy constructor --invoked
    t2.getInfo();
    // t1.name = "Prachi";
    // t1.subjects= "C++";
    // t1.setSalary(250000);

    // cout<<t1.dept<<endl;
    return 0;
}  