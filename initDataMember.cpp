#include <iostream>
using namespace std;

class Test{
    private:
        int x;
        int y;
    public:
        Test():x(10),y(x+10){}
        void print();
};

void Test::print(){
    cout << "X : " << x << "\nY : "<<y<<endl;
}

int main()
{
    Test t;
    t.print();
    getchar();

    return 0;
}
