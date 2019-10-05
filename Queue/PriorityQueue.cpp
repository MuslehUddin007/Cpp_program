//difference between Queue and Priority Queue is Queue is unorder and Priority Queue is order//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void showpq(priority_queue <int> pq){
    while(!pq.empty()){
        cout << '\t' << pq.top();
        pq.pop();
    }
    cout << endl;;
}

void showpq1(priority_queue<int, vector<int>,greater<int>> gq){   //convert into min heap//
    priority_queue<int, vector<int>,greater<int>> g = gq;
    while(!g.empty()){
        cout << '\t' << g.top();
        g.pop();
    }
    cout << endl;
}

int main()
{
    //priority_queue <int , vector<int>, greater<int>> pq;// for min heap//
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
    cout << "Priority Queue after insert : " << endl;
    showpq(pq);
    cout << "min heap : " << endl;
    //showpq1(pq);

    cout << "Size : " << pq.size() << endl;
    cout << "Top : " << pq.top() << endl;

    cout << "After pop : " << endl;
    pq.pop();
    showpq(pq);
    return 0;
}