#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
    pair<int,char> PAIR1;
    pair<string,double> PAIR2("GeeksforGeeks",1.25);
    pair<string,double> PAIR3;

    PAIR1.first = 100;
    PAIR2.second = 'G';

    PAIR3 = make_pair("GeeksforGeeks is Best",4.56);

    cout << PAIR1.second << " " << PAIR1.first<< endl;
    cout << PAIR2.first << " " << PAIR2.second << endl;
    cout << PAIR3.first << " " << PAIR3.second << endl;

    PAIR3.swap(PAIR2);
    cout << PAIR3.second << " " << PAIR3.first<< endl;
    cout << PAIR2.first << " " << PAIR2.second << endl;
}
