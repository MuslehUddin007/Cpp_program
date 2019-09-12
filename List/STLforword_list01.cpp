#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist1;
    forward_list<int> flist2;

    flist1.assign({1,2,3});
    flist2.assign(5,12);

    flist1.push_front(60);
    flist2.emplace_front(70);
    //flist1.pop_front();//

    cout << "The elements of first forward list are : ";
    for (int &a : flist1)
        cout << a << " ";
    cout << endl;

    cout << "The elements of second forward list are : ";
    for (int &b : flist2)
        cout << b << " ";
    cout << endl;

    return 0;
}
