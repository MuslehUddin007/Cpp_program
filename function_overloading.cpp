#include<iostream>

int area(int x)
{
    return (3.1416*x*x);
}

float area(int x,int y)
{
    return (x*y);
}

void add(int x,int y,int z = 0)
{
    std::cout << (x+y+z) << std::endl;
}
int main()
{
    //reference variable//
    int x = 10;
    int &y = x;
    //std::cout << y;

    //function overloading//
    int a=0,r=0;
    std::cout<<"Enter the redious of circle: ";
    std::cin >> r;
    a = area(r);
    std::cout << a << std::endl;

    int l=0,b=0;
    std::cout << "Enter the l and b: ";
    std::cin >>l>>b;
    a = area(l,b);
    std::cout << a << std::endl;

    //function default value//
    add(l,b,20);
}
