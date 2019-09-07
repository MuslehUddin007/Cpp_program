#include <iostream>
#include <queue>
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
    show(q1);

    q1.pop();
    q1.pop();
    show(q1);

    return 0;
}
