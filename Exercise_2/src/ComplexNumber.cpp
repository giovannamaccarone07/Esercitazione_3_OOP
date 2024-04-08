#include "ComplexNumber.hpp"
#include <iostream>
#include <limits>

namespace ComplexLibrary{

//funzione per calcolare il coniugato di un numero complesso
ComplexNumber conjugate(ComplexNumber& c1)
{
    ComplexNumber c(c1.parteReale, -c1.parteImmaginaria);
    return c;
}

ostream& operator<<(ostream& os, const ComplexNumber& c){

    if(c.parteImmaginaria < 0)
        os << c.parteReale << "-" << fabs(c.parteImmaginaria) << "i";
    else if (c.parteImmaginaria > 0)
        os << c.parteReale << "+" << fabs(c.parteImmaginaria) << "i";
    else
        os << c.parteReale << endl;

    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2){

    ComplexNumber d(c1.parteReale + c2.parteReale, c1.parteImmaginaria + c2.parteImmaginaria);
    return d;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2){

    //impongo una tolleranza pari all'epsilon di macchina
    double tol = numeric_limits<double>::epsilon();

    if (fabs(c1.parteReale-c2.parteReale) < tol && fabs(c1.parteImmaginaria-c2.parteImmaginaria) < tol)
        return true;
    else
        return false;
}

}
