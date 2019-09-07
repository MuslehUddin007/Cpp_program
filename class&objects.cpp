#include <iostream>
using namespace std;

class geeks{
public:
    string geeksname;
    int id;

    geeks(){
        cout << "without parameter constructor" <<endl;
    }
    geeks(int x){
        cout << "parameter constructor" << endl;
        id = x;
    }
    ~geeks(){
        cout << "Inside destructor" << endl;
    }

    void printname(){
        cout << geeksname <<endl;
    }
    void printid();
};

void geeks::printid(){
    cout << id << endl;
}

int main()
{
    geeks obj2;
    geeks obj1(160);
    obj1.geeksname = "Md Musleh Uddin";
    obj1.printname();
    obj1.printid();

    return 0;
}
