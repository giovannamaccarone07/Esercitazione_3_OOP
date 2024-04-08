#ifndef __COMPLEXNUMBER_H // Header guards
#define __COMPLEXNUMBER_H


#include <iostream>
#include <cmath>

#pragma once
using namespace std;

namespace ComplexLibrary{

struct ComplexNumber{

    double parteReale;
    double parteImmaginaria;

    //costruttori
    ComplexNumber(double a, double b)
    {
        parteReale = a;
        parteImmaginaria = b;
    }

    ComplexNumber() = default;
};

ComplexNumber conjugate(ComplexNumber c);

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);

}
#endif
