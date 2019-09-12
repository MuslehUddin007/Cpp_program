#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1 = {1,1,1,2,2,3,3,4};
    list<int> l2 = {2,4,6};

    list<int>::iterator it = l1.begin();

    advance(it,3);

    cout << "list1 before unique operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    //l1.swap(l2); --swap two list//

    l1.unique();
    cout << "list1 after unique operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    l1.splice(it,l2);
    cout << "list1 before splice operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    return 0;
}
