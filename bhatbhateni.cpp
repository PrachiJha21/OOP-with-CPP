/*Write a C++ program to display a Bhat-Bhateni Supermarket (Biratnagar) bill using manipulators.
The bill should include store details, customer information, an itemized table (Sn, Particulars, Qty, Rate, Amount), and calculations for Gross Amount, VAT (13%), Net Amount, Tender, Change, and Total Quantity with
proper alignment and formatting.*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout <<setw(6)<<" "<< "BHAT-BHATENI SUPER MARKET(BIRATNAGAR)" << endl;
    cout << setw(11)<<" " << "BIRATNAGAR, NEPAL" << endl;
    cout << setw(11)<<" " << "VAT NO: ##########" << endl;
    cout << setw(14)<<" " << "TAX INVOICE" << endl;

    cout << endl;

    cout << "Bill NO: ##########-###-##/##" << endl;
    cout << "Transaction Date: ##/##/####" << endl;
    cout << "Invoice Date   : ##/##/####" << endl;
    cout << "Name: Prachi Jha" << endl;
    cout << "TPIN:" << endl;
    cout << "Address:" << endl;
    cout << "Tel no.:" << endl;
    cout << "Payment Mode: Cash" << endl;

    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
 
    cout << left << setw(5) << "Sn" << setw(15) << "Particulars" 
    << right << setw(8) << "Qty" << setw(10) << "Rate" << setw(12) << "Amount" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');

    cout << left << setw(5) << "1" << setw(15) << "Pen" << right << setw(8) << "10" << setw(10) << "5.50" << setw(12) << "55.00" << endl;
    cout << left << setw(5) << "2" << setw(15) << "Notebook" << right << setw(8) << "2" << setw(10) << "45.75" << setw(12) << "91.50" << endl;
    cout << left << setw(5) << "3" << setw(15) << "Eraser" << right << setw(8) << "5" << setw(10) << "3.25" << setw(12) << "16.25" << endl;

    cout<< left<< setw(20)<<" "<<right << setfill('-')<<setw(30)<<"-"<<endl;
    cout << setfill(' ');

    double gross = 162.75;
    double vat = gross * 0.13;
    double net = gross + vat;
    double tender = 200.00;
    double change = tender - net;

    cout << right << setw(40) << "Gross Amount    : " << setw(10) << fixed << setprecision(2) << gross << endl;
    cout << right << setw(40) << "Taxable         : " << setw(10) << gross << endl;
    cout << right << setw(40) << "NonTaxable      : " << setw(10) << "0.00" << endl;
    cout << right << setw(40) << "VAT 13%         : " << setw(10) << vat << endl;
    cout << right << setw(40) << "Net Amount      : " << setw(10) << net << endl;
    cout<< left<< setw(20)<<" "<<right << setfill('-')<<setw(30)<<"-"<<endl;
    cout<<setfill(' ');    

    //cout << endl;

    cout << right << setw(40) << "Tender          : " << setw(10) << tender << endl;
    cout << right << setw(40) << "Change          : " << setw(10) << change << endl;
    cout<< left<< setw(20)<<" "<<right << setfill('-')<<setw(30)<<"-"<<endl <<setfill(' ');
    cout << right << setw(39) << "Total Qty       :" << setw(10) << 17 << endl;

    cout << setfill('-') << setw(50) << "-" << endl;
    return 0;
}
