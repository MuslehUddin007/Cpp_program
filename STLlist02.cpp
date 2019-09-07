#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1 = {1,2,3};
    list<int> l2 = {2,4,6};

    l1.merge(l2);

    cout << "List1 after merge operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    l1.remove_if([](int x){return x%2 != 0;});

    cout << "List1 after remove_if operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    return 0;
}
