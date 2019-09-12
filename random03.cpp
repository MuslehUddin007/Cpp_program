#include <iostream>
#include <random>
using namespace std;

int main()
{
    unsigned s = 2;
    default_random_engine generator(s);
    uniform_int_distribution<int> distribution(1,10);      //range//
    cout << "Some random number between 1 to 10 " << endl;
    for(int i=0;i<10;i++)
        cout << distribution(generate) << " ";
    cout << endl;

    return 0;
}