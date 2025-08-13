// Implement multiple inheritance with classes `Person`, `Academic`, and derived class
// `Student`. Include appropriate constructors and member functions.

#include<iostream>
using namespace std;

class Person{
    string name;
    public:
        Person(string n="Unknown"){
            name = n;
        }
        void displayPerson(){
            cout<<"Name is: "<<name<<endl;
        }
};

class Academic{
    string subject;
    public:
        Academic(string sub="Unknown"): subject{sub}{
        }
        void displayAcademic(){
            cout<<"Favourite subject is: "<< subject<<endl;
        }
};

class Student : public Person, public Academic{
    public:
        Student(string n, string s): Person(n), Academic(s){}
        void display(){
            displayPerson();
            displayAcademic();
        }
};

int main(){
    Student s1("Prachi", "OOP");
    s1.display();
    return 0;
}

