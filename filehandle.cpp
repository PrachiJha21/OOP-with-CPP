/*Write a program to open the file in write mode to write the name, roll and marks obtained in OOP of 'n' number of students*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt");
    int n;
    
    
    cout << "Enter number of students: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string name;
        int roll;
        float marks;
        
        cout << "\nStudent " << i+1 << ":" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Roll: ";
        cin >> roll;
        cout << "Marks: ";
        cin >> marks;
        
        file << name << "\n" << roll << "\n" << marks << "\n";
    }
    
    file.close();
    cout << "\nData saved to file!";
    
    return 0;
}
