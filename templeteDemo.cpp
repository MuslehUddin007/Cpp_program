#include <iostream>
using namespace std;

void print(){
    cout << "I am empty function" << endl; //I've to declare this function to terminate template print//
}

template <typename T, typename... Types>
void print(T var1, Types... var2){
    cout << var1 << endl;
    print(var2...);
}

int main()
{
    print(1,2,3.14159,"Pass me any"
          "number of arguments"
          "I will print\n");

    return 0;
}
