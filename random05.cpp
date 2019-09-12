#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main()
{
    default_random_engine generator;
    uniform_real_distribution<double> distribution(0.0,100.0);
    cout << distribution(generator) << endl;   //generate first random number //
    distribution.reset();                      //Resets the distribution//
    cout << distribution(generator) << endl;   //generate second random number//
    cout << "-gcd(6,20) : " << __gcd(6,20) << endl;

    return 0;
}