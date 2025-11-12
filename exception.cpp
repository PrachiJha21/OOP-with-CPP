// NOT IN LABS
#include<iostream>
using namespace std;

int main(){
    try{
        int a , b;
        cout<<"Enter first number"<<endl;
        cin>>a;
        cout<<"Enter Second number"<<endl;
        cin>>b;

        if (b == 0){
            throw "Cant be divided by zero";
        }

        int result;
        result = a /b;
        cout<<result;
    }
    catch(const char* msg){
        cout<<"Error: "<<msg<<endl;
    }
    return 0;
}
