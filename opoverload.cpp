/*Create a class called date that has separate mt data members for year, month and day. 
Constructor should initialize the values of these data member. Add two objects of type date using operator overloading.*/
#include<iostream>
using namespace std;

class date{
    int year;
    int month;
    int day;
    public:
        date(int y=2025, int m=0, int d=0){
            year = y;
            month = m;
            day = d;
        }
        date operator+(date &d1){
            date d;
            d.day = day + d1.day;
            d.month = month + d1.month;
            if(d.day >30){
                int rem = d.day/30;
                d.day = d.day % 30;
                d.month+=rem;
                if(d.month>12){
                    int rem_year = 0;
                    rem_year = d.month/12;
                    d.month %=12;
                    d.year+= rem_year;
                }
            }
            return d;
        }
        void display(){
            cout<<"Date is: "<<year<<"/"<<month<<"/"<<day<<endl;
        }
};
int main(){
    date d1(2025,4,6), d2(2025,5,40);
    date d3;
    d3 = d1 + d2;
    d3.display();
    return 0;
}