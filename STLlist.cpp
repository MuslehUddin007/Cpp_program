#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;

    list<int>::iterator it = l1.begin();

    for(int i=1;i<=5;i++)
        l1.emplace_back(i);

    cout << "List after emplace_back operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    for(int i=10;i<=50;i+=10)
        l1.emplace_front(i);

    cout << "List after emplace_front operation is : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    advance(it,2);
    l1.emplace(it,100);

    cout << "Display List : ";
    for(int &x : l1)
        cout << x << " ";
    cout << endl;

    return 0;
}
