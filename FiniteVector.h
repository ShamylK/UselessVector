
#include <iostream>

using namespace std;

class FiniteVector
{
    //overloaded friend function that adds two vectors
    friend FiniteVector operator+(const FiniteVector& a, const FiniteVector& b);
    friend ostream& operator<<(ostream& s,FiniteVector a);

public:
    // default constructor that makes the values 0
    FiniteVector();

    // conversion constructor that takes a value and sets it to 1
    FiniteVector(double one);

    // Constructors that essentially do that same thing but with more inputs
    FiniteVector(double one,double two);
    FiniteVector(double one,double two, double three);
    FiniteVector(double one,double two, double three, double four);
    FiniteVector(double one,double two, double three, double four, double five);

    //getters and setters for all the private data members
    void SetOne(double one);
    double GetOne();
    void SetTwo(double Two);
    double GetTwo();
    void SetThree(double Three);
    double GetThree();
    void SetFour(double Four);
    double GetFour();
    void SetFive(double Five);
    double GetFive();

    // - operator overloaded function that subtracts to vectors
    FiniteVector operator-(const FiniteVector a);
    // * operator overloaded function that multiplies to vectors
    double operator*(const FiniteVector a);

private:
    double v1;
    double v2;
    double v3;
    double v4;
    double v5;
};
