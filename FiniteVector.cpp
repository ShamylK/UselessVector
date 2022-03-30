#include "library.h"
#include <iostream>

using namespace std;

FiniteVector::FiniteVector()
{
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
}

FiniteVector::FiniteVector (double one)
{
    v1 = one;
}

FiniteVector::FiniteVector (double one,double two)
{
    v1 = one;
    v2 = two;
}

FiniteVector::FiniteVector (double one,double two, double three)
{
    v1 = one;
    v2 = two;
    v3 = three;
}

FiniteVector::FiniteVector (double one,double two, double three, double four)
{
    v1 = one;
    v2 = two;
    v3 = three;
    v4 = four;
}

FiniteVector::FiniteVector (double one,double two, double three, double four, double five)
{
    v1 = one;
    v2 = two;
    v3 = three;
    v4 = four;
    v5 = five;
}

void FiniteVector::SetOne(double one)
{
    v1 = one;
}
double FiniteVector::GetOne()
{
    return v1;
}
void FiniteVector::SetTwo(double Two)
{
    v2 = Two;
}
double FiniteVector::GetTwo()
{
    return v2;
}
void FiniteVector::SetThree(double Three)
{
    v3 = Three;
}
double FiniteVector::GetThree()
{
    return v3;
}
void FiniteVector::SetFour(double Four)
{
    v4 = Four;
}
double FiniteVector::GetFour()
{
    return v4;
}
void FiniteVector::SetFive(double Five)
{
    v5 = Five;
}
double FiniteVector::GetFive()
{
    return v5;
}

FiniteVector operator+(const FiniteVector& a, const FiniteVector& b)
{
    FiniteVector(c);
    c.v1 = a.v1 + b.v1;
    c.v2 = a.v2 + b.v2;
    c.v3 = a.v3 + b.v3;
    c.v4 = a.v4 + b.v4;
    c.v5 = a.v5 + b.v5;
    return c;
}

FiniteVector FiniteVector::operator-(const FiniteVector a)
{
    FiniteVector(b);
    b.v1 = a.v1 - v1;
    b.v2 = a.v2 - v2;
    b.v3 = a.v3 - v3;
    b.v4 = a.v4 - v4;
    b.v5 = a.v5 - v5;
    return b;
}

double FiniteVector::operator*(const FiniteVector a)
{
    double v;
    v = a.v1 * v1 + a.v2 * v2 + a.v3 * v3 + a.v4 * v4 + a.v5 * v5;
    return v;
}

ostream& operator<<(ostream& s,FiniteVector a)
{
    s << "<" << a.v1 << "," << a.v2 << "," << a.v3<< "," << a.v4 << "," << a.v5 << ">";
    return s;
}