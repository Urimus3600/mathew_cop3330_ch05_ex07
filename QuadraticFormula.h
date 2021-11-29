/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Austin Mathew
 */

#include "std_lib_facilities.h"
#ifndef MATHEW_COP3330_CH05_EX07_QUADRATICFORMULA_H
#define MATHEW_COP3330_CH05_EX07_QUADRATICFORMULA_H

class QuadraticFormula {
private:
    string strAnswer;
    vector<double> answers;

    void AssignQuadElements(const double a,const double b,const double c){
        double det = determinant(a,b,c);
        // determinant determines the number of solutions

        if(det < 0){
            strAnswer = "No real solutions.\n";
        }
        else if(det == 0){
            answers.resize(1);
            //frees space for 1 answer
            answers[0] = (-b)/(2.0*a);
            //puts answer in the vector

            strAnswer = "The only solution to the equation is " + to_string(answers[0]);
            //writes string to give answer, alternative to raw values
        }
        else{
            det = sqrt(det);
            //determinant is sqrt in formula

            answers.resize(2);
            //frees space for 2 answers
            answers[0] = (-b+det)/(2.0*a);
            answers[1] = (-b-det)/(2.0*a);
            //puts answers in the vector

            strAnswer = "The two solutions to the equation are ";
            strAnswer += to_string(answers[0]) + " and " + to_string(answers[1]);
            //writes string to give answer, alternative to raw values
        }
    }

    static double determinant(const double a, const double b, const double c){
        return (b*b-4.0*a*c);
    }

public:
    QuadraticFormula(double a, double b, double c){
        if(a == 0){
            strAnswer = "Is not a quadratic equation because a is 0.\n";
            //if not caught, the formula would call for division by 0
        }
        else{
            AssignQuadElements(a, b, c);
        }
    }

    string getStrAnswer(){
        return strAnswer;
    }

    Vector<double> getAnswers(){
        return answers;
    }


};


#endif //MATHEW_COP3330_CH05_EX07_QUADRATICFORMULA_H
