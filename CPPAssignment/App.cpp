
    // include pre-processor directive
#include <iostream>
#include "./headers/RationalNumber.h"

using namespace std;
int main(){
    // create a RationalNumber object named r1 using 
    // its no-arg constructor
    RationalNumber r1;
    // output the contents of r1 in fraction form
    int x,y; 
    cout << "Enter number"; 
    cin>>x; 
    cout << "Enter another number"; 
    cin >> y; 
 
    for(int i = x+1; i < y; i++ ) 
        cout << i << " "; 
    // output the contents of r1 in quotient form
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    // set r1's numerator to 4
    void setNumerator(4);
    // set r1's denominator to 6
    void setDenominator(6);
    // output the contents of r1 in fraction form
    int x,y; 
    cout << "Enter number"; 
    cin>>x; 
    cout << "Enter another number"; 
    cin >> y; 
 
    for(int i = x+1; i < y; i++ ) 
        cout << i << " "; 
    // output the contents of r1 in quotient form
int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;
    // create a RationalNumber object named r2 using 
    // its two-arg constructor passing a numerator of
    // 2 and a denominator of 4
RationalNumber r2(2,4);
    // output the contents of r2 in fraction form
    int x,y; 
    cout << "Enter number"; 
    cin>>x; 
    cout << "Enter another number"; 
    cin >> y; 
    // output the contents of r2 in quotient form
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;
    // get r2's numerator and then display it to stdout
    cout << "RationalNumber : 2 ";
    r2.printRationalNumber();
    // get r2's denomiator and then display it to stdout
     cout << "RationalNumber : 4 ";
    r2.printRationalNumber();

    // call method on r1 that will test if it is equal to r2
    // and display its return to stdout as false or true
    cout << "RationalNumber 1 equal RadicalNumber 2 ? " <<
        (r1.equalRationalNumber(r2)? "true" : "false") << endl;
    return 0;

}