#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <string.h>
#include <string>
#include <iostream>


class Complex{

private:

    double real;
    double imag;
public:
    Complex(double real, double imag);
    Complex add(Complex *c);
    Complex *mul(Complex *c);

    Complex *quot(Complex *c);
    double abs();

    void setreal(double real);

    double getreal();

    void setimag(double imag);

    double getimag();

    void show_compl();

    Complex compute_polar();

    void show_exp();
//adds two complex numbers
    Complex add(Complex c);

    Complex mul(Complex c);

    Complex quot(Complex c);
};



#endif // COMPLEX_H_INCLUDED
