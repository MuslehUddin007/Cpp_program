#include <iostream>
using namespace std;

class Integer{
    private:
        int x;
    public:
        Integer(int x){
            this -> x = x;
        }

    Integer operator ++(){
        Integer i;
        i.x = ++x;

        return i;
    }

    void print(){
        cout << "Pre Increment : " << x << endl;
    }
};


int main()
{
    Integer i1(4);
    Integer i2 = ++i1;
    i2.print();

    return 0;
}
