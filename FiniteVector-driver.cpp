#include "library.h"
#include <iostream>

using namespace std;

int main()
{
    FiniteVector a;
    FiniteVector b(1,2,3,4,5);
    FiniteVector c(1.5,2.5,3.5,4.5,5.5);
    FiniteVector d(0.1,0.2,0.3,0.4,0.5);
    FiniteVector e(-2.4,1,-3.3,1.25,6);
    FiniteVector f(0,1,1,1,0);
    FiniteVector g(1,1,1,1,1);
    FiniteVector h(1,0,0,0,1);
    FiniteVector j(1,1,0,1,1);
    FiniteVector k(3,4,5,6,7);
    FiniteVector l(1,0,1,0,0);

    //1. <0,0,0,0,0> + <1,2,3,4,5>
    cout << a + b << endl;

    //2. <1,2,3,4,5> + <3,4,5,6,7>
    cout << b + k << endl;

    //3. <1.5,2.5,3.5,4.5,5.5> + <0.1,0.2,0.3,0.4,0.5>
    cout << c + d << endl;

    //4. <0,0,0,0,0> - <1,2,3,4,5>
    cout << a - b << endl;

    //5. <1,2,3,4,5> - <3,4,5,6,7>
    cout << b - k << endl;

    //6. <1.5,2.5,3.5,4.5,5.5> - <0.1,0.2,0.3,0.4,0.5>
    cout << c - d << endl;

    //7. <-2.4,1,-3.3,1.25,6>*<1,2,3,4,5>
    cout << e * b << endl;

    //8. (<0,1,1,1,0> + <1,2,3,4,5>) * (<1,0,1,0,0> + <1,1,1,1,1>)
    cout << (f + b) * (l + g) << endl;

    //9. (<1,0,0,0,1> - <1,2,3,4,5>) * (<1,1,0,1,1> - <1,1,1,1,1>)
    cout << (h-b) * (j - g) << endl;

    //10. (<0,1,1,1,0> * <1,2,3,4,5>) * (<1,0,1,0,0> * <1,1,1,1,1>)
    cout << (f * b) * (l * g) << endl;
}


