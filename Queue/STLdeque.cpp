#include <iostream>
#include <deque>
using namespace std;

void show(deque<int> g){
    //deque<int> :: iterator it;
    cout << endl;
    for(auto it = g.begin(); it != g.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    show(dq);

    cout << "\n At : " << dq.at(2);
    dq.pop_front();
    dq.pop_back();
    show(dq);

    return 0;
}
