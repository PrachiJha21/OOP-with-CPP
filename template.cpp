/*Write a program which calculate area of rectangle for int type data and float type data using template function.*/

// #include<iostream>
// using namespace std;

// template <typename T>
// T area(T length, T breadth){
//     return length * breadth;
// }

// int main(){
//     cout<<area(3,4)<<endl<<area(3.4,7.6);
//     return 0;
// }

//class templates

#include<iostream>
using namespace std;
#include<cstdlib>

// template <typename T>
// class Calculator{
// public:
//     T add(T a, T b){
//         return a +b;
//     }
//     T subtract(T a, T b){
//         return a - b;
//     }
//     T multiply (T a, T b){
//         return a*b;
//     }
//     T divide(T a, T b){
//         if(b == 0){
//             cout<<"Error! Cant be divided by 0";
//             exit(1);
//         }
//         else{
//             return a / b;
//         }
//     }
// };

// int main(){
//     Calculator<float> Calculator_float;
//     cout<<Calculator_float.add(2,3)<<endl;
//     cout<<Calculator_float.divide(5.8,2.2);
//     return 0;
// }

/*Write a program to input numbers and print the largest number using function template.*/

template<typename T>
T largest_number(T a[], int size){
    T largest = a[0];
    for (int i = 1; i < size; i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }
    return largest;
}

int main(){
    int array[5]= {1,4,54,6,7};
    cout<<"Largest number is: "<< largest_number(array, 5);
    return 0;
}
