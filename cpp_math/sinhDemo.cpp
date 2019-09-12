//acos() --inverse conine//
//asinh,acosh,atanh --inverse hyperbolic angle//
#include <iostream>
#include <complex>
using namespace std;

int main()
{
    double x = 4.1;
    double result = sinh(x); //cosh//tanh//
    cout << "sinh(4.1) = " << result << endl;

    double xDegrees = 90;
    x = xDegrees * 3.14159 / 180;
    result = sinh(x);
    cout << "sinh(90 degrees) = " << result << endl;

    return 0;
}
