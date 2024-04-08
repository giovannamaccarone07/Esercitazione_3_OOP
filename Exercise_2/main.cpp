#include <iostream>
#include "ComplexNumber.hpp"
#include "ComplexNumber.cpp"

using namespace ComplexLibrary;
using namespace std;

int main()
{
    //definisco due numeri complessi
    ComplexNumber c1(2, 4);
    ComplexNumber c2(2, -4.000000111);

    cout << "Primo numero complesso: c1 = " << c1 << endl;
    cout << "Secondo numero complesso: c2 = " << c2 << endl;

    //calcolo la loro somma
    ComplexNumber somma = c1 + c2;
    cout << "Somma: c1 + c2 = " << somma << endl;

    //calcolo il coniugato
    ComplexNumber conj = conjugate(c1);
    cout << "Coniugato di c1: c1' = " << conj << endl;

    //verifico se sono uguali
    if(c1 == c2)
        cout << "I due numeri complessi sono diversi." << endl;
    else
        cout << "I due numeri complessi sono uguali." << endl;

    return 0;

}