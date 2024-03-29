// include pre-processor directives
#include <iostream>
#include <iomanip>   
#include "GreatestCommonFactor.h"

// use C++ standard library namespace
using namespace std;

// write the code for the RationalNumber class
class RationalNumber : GreatestCommonFactor
{
private:
// field used to store the numerator of
// this rational number
int numerator;
// field used to store the denominator of
// this rational number
int denominator;
// this method, defined in the GreatestCommonFactor
// abstract class, computes the greatest
// common factor of the two specified integers.
int gcf(int, int) override;

public:

// this constructor sets the numerator and
// denominator to 1.
RationalNumber();
// this constructor sets the numerator and
// denominator to the two specified integers;
// where the first specified int is the numerator
// and the second specified int is the denominator.
// if the second specified int is equal to zero, this
// constructor throws an invalid argument exception.
// this constructor must store the numerator and denominator
// in reduced form; for example 2/4 in reduced
// form is 1/2.
// to reduce a fraction, divide the numerator
// and the denominator by the greatest common factor.
//2
RationalNumber(int, int);
// this method sets the numerator of this rational
// number to the specified int
void setNumerator(int);
// this method gets the numerator of this rational
// number
void getNumerator(int&) const;
// this method sets the denominator of this rational
// number to the specified int.
// if the specified int is equal to zero, this
// method throws an invalid argument exception.
void setDenominator(int);
// this method gets the denominator of this rational
// number
void getDenominator(int&) const;
// this method displays this rational number to stdout
// in fraction form
void printRationalNumber() const;
// this method displays this rational number to stdout
// in quotient form using the specified precision to
// to format the number of digits after the decimal
void printRationalNumber(int) const;
// this method returns true if this rational number is equal to
// the specified rational number, else it returns false
bool equalRationalNumber(const RationalNumber&) const;
};

RationalNumber::RationalNumber()
{
    this-> num = 0.0;
    lowest = num;
    highest = num;
    sum = num;
}

void RationalNumber::getRationalNumber(double& lowest, double& highest, double& sum) const
{
    lowest = this->lowest;
    highest = this->highest;
    sum = this->sum;
}
void RationalNumber::addNumber(double num)
{
    this->num = num;
    computeHighest();
    computeLowest();
    computeSum();
}

void RationalNumber::computeHighest()
{
    if (num > highest) {
        highest = num;
    } 
}

void RationalNumber::computeLowest()
{
    if (num < lowest) {
        lowest = num;
    } 
}

void RationalNumber::computeSum()
{
    sum += num;
}

void RationalNumber::printRationalNumber() const
{
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "lowest=" << lowest << ", highest=" << highest <<
            " sum=" << sum << endl;
}

bool RationalNumber::equalRationalNumber(const RationalNumber& other) const
{
    return (lowest == other.lowest &&
        highest == other.highest &&
        sum == other.sum);
}