#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;
    for(int i=1;i<10;i++){
        g1.push_back(i*10);
    }

    cout << "Reference operator : " << g1[2] << endl;
    cout << "\nAt : " << g1.at(4) << endl;
    cout << "\nFront : " << g1.front() << endl;
    cout << "\nBack : " << g1.back() << endl;

    int *pos = g1.data();
    cout << "\nThe first element is : " << *pos << endl;


    return 0;
}
