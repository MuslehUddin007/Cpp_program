#include <iostream>
#include <queue>    //FIFO//
using namespace std;

void show(queue<int> q){
    queue<int> g = q;
    while(!g.empty()){
        cout << g.front() << " ";
        g.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    cout << "Queue after insert element : " << endl;
    show(q1);

    cout << "Size : " << q1.size() << endl;
    cout << "front : " << q1.front() << endl;
    cout << "Back : " << q1.back() << endl; 

    q1.pop();
    q1.pop();
    cout << "After pop : " << endl;
    show(q1);

    return 0;
}
