#include <iostream>
#include <chrono>
#include <random>
using namespace std;

int main()
{
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 generate(seed);
    cout << generate() << "is a random number between ";
    cout << generate.min() << " and " << generate.max() << endl;

    return 0;
}