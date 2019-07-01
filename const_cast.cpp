#include<iostream>

int main()
{
    const int a1 = 10;
    const int *b1 = &a1;
    int *d1 = const_cast<int*>(b1);
    *d1 = 15;
    std::cout << a1 << *b1 << std::endl;

    int a2 = 10;
    const int *b2 = &a2;
    int *d2 = const_cast<int*>(b2);
    *d2 = 30;
    std::cout << a2 <<" "<< *b2 << std::endl;
    return 0;
}
