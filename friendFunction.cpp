#include <iostream>
using namespace std;

class B; // declared B class//
class A{
    public:
        void showB(B&);
};

class B{
    private:
        int a;
    public:
        B(){a=55;}
        friend void A::showB(B& obj); // friend function//
};

void A::showB(B& obj){
    cout << "B::a = " << obj.a <<endl;
}

int main()
{
    A a;
    B b;
    a.showB(b);

    return 0;
}
