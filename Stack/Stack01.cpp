#include <iostream>
#include <stack>     //LIFO(Last In First Out)//
using namespace std;

void showstack(stack<int> s){
    while(!s.empty()){
        cout << '\t' << s.top();
        s.pop();
    }
    cout << "\n";
}

int main()
{
    stack <int> s;
    s.push(10);     //Time complexity O(1)//
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The stack is : ";
    showstack(s);

    cout << "\nSize : " << s.size() << endl;   //Time complexity O(1)//
    cout << "Top : " << s.top() << endl;      //Time complexity O(1)//
    cout << "Pop : ";
    s.pop();        //Time complexity O(1)//
    showstack(s);

    //add stack element//
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << "Sum : " << sum;

    return 0;
}

//Error(push) : Show error if the value passed doesn't match the stack type//
//Error(pop) : show error if a parameter is passed//
//Error(top) : if stack is empty, it cause undefine behaviour//
//Error(empty,size) : show error if passed any paramenter//