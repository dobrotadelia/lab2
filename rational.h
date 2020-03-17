#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED



class Rational{
private:
    int zahler{};
    int nenner{};

public:
    Rational(int zahler, int nenner);
    int getzahler();
    int getnenner();
    void setzahler(int zahler);
    void setnenner(int nenner);
    void show();

    Rational add(Rational r);

    Rational mul(Rational r);

    Rational quot(Rational r);
};



#endif // RATIONAL_H_INCLUDED
