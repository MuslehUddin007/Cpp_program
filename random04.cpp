#include <iostream>
#include <random>
using namespace std;

int main()
{
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1,1000);
    cout << distribution(generator) << endl;   //generate first random number //
    distribution.reset();                      //Resets the distribution//
    cout << distribution(generator) << endl;   //generate second random number//

    return 0;
}