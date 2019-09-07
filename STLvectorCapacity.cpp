#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;

    for(int i=0;i<5;i++)
        g1.push_back(i);    //insert element into vector//

    cout << "Size : " << g1.size() << endl;
    cout << "Max_size : " << g1.max_size() << endl;
    cout << "Capacity : " << g1.capacity() << endl;

    cout << "\nVector : ";
    for(auto i=g1.begin();i!=g1.end();i++)
        cout << *i << " ";

    g1.resize(4);
    cout << "\nSize after resize : " << g1.size() << endl;
    cout << "\nResize Vector : ";
    for(auto i=g1.begin();i!=g1.end();i++)
        cout << *i << " ";

    if(g1.empty() == false)
        cout << "\nVector is not Empty" << endl;
    else
        cout << "\nVector is Empty" << endl;

    g1.shrink_to_fit();
    cout << "\nShrink Vector : ";
    for(auto it=g1.begin();it!=g1.end();it++)
        cout << *it << " ";

    return 0;
}
