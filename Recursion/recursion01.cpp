#include <iostream>
#include <conio.h>

int fact(int n){
    if(n==1)
        return 1;
    else if(n==0)
        return 1;
    else
        return n * fact(n-1);
}

int main()
{
    int num = 0;
    std::cout << "Enter any number : ";
    std::cin >> num;

    if(num==0){
        std::cout << "\bFactorial : 0" << std::endl;
    }
    else
        std::cout << "\nFactorial : " << fact(num) << std::endl;

    return 0;
}
