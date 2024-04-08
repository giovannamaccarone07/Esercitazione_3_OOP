#include <iostream>
#include "ComplexNumber.hpp"

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
    cout << "Coniugato di c1: c1' = " << conjugate(c1) << endl;

    //verifico se sono uguali
    if(c1 == c2)
        cout << "I due numeri complessi sono uguali." << endl;
    else
        cout << "I due numeri complessi sono diversi." << endl;

    return 0;

}
