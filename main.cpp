/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Austin Mathew
 */

#include "std_lib_facilities.h"
#include "QuadraticFormula.h"


int main() {
    cout << "Enter the coefficients for the quadratic equation:\n";
    cout << "y = a*x^2 + b*x + c\n";
    cout << "Where y is the dependent variable and x is the independent variable\n";
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    //reads in coefficients

    QuadraticFormula solution(a, b, c);
    cout << solution.getStrAnswer();
    //prints out solution in string form

    return 0;
}
