#include <iostream>
#include "rational.h"

int Rational::getzahler() {
    return this->zahler;
}

int Rational::getnenner() {
    return this->nenner;
}

void Rational::setzahler(int zahler) {
    this->zahler = zahler;
}

void Rational::setnenner(int nenner) {
    this->nenner = nenner;
}

Rational::Rational(int zahler, int nenner) {
    this->zahler = zahler;
    this->nenner = nenner;
}

void Rational::show() {
    std::cout<<this->zahler<<"/"<<this->nenner;
}

Rational Rational::add(Rational r) {

    r.zahler = r.zahler*this->nenner + this->zahler*r.nenner;
    r.nenner = r.nenner*this->nenner;

    int i=2;
    while(i<r.nenner and i<r.zahler){
        if(r.nenner%i == 0 and r.zahler%i==0)
        {
            r.nenner/=i;
            r.zahler/=i;
        }
        i++;
    }

    return r;
}

Rational Rational::mul(Rational r) {

    r.zahler = r.zahler*this->zahler;
    r.nenner = r.nenner*this->nenner;

    int i=2;
    while(i<r.nenner and i<r.zahler){
        if(r.nenner%i == 0 and r.zahler%i==0)
        {
            r.nenner/=i;
            r.zahler/=i;
        }
        i++;
    }

    return r;
}
Rational Rational::quot(Rational r){
    int aux;
    aux = r.zahler;
    r.zahler = r.nenner;
    r.nenner = aux;
    return this->mul(r);
}
