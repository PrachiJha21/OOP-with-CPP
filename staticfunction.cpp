// C++ Program to show the working of
// static member functions
#include <iostream>  
using namespace std; 

class Box  
{  
    private:  
        static int length; 
        static int breadth;
    
    public:
    
        void print()  
        {  
            cout<<"the length is "<<length<<endl;
        }
        static void prints()  
        {  
            cout<<"the Breadth is "<<breadth<<endl;
        }
};  

int Box :: length = 10;  
int Box :: breadth = 5;
  
int main()  
{
    
    Box b;  
    
    cout << "Static member function is called through Object name:" << endl;  
    b.print();  
    
    cout << "Static member function is called through Class name:" << endl;  
    Box::prints();  
    
    return 0;  
}