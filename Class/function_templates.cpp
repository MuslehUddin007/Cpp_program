#include <iostream>
using namespace std;

//template <class Tfunction>
template <class Tfunction1, class Tfunction2>
Tfunction2 add(Tfunction1 a, Tfunction2 b){
    return a+b;
}

int main()
{
    cout << "Add int = " << add(10,50.5) << endl;
    cout << "Add Double = " << add(10.5,15.2) << endl;

    return 0;
}
