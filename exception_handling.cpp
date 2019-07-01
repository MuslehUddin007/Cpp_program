#include<iostream>

int main()
{
    int num1, num2;

    try{
        std::cin >> num1;
        std::cin >> num2;
        if(num2 == 0){
            throw -1;
        }
    }catch(...){ //int x or three dot//
        std::cout << "Divide by zero is not possible." << std::endl;
        std::cout << "Please try again" << std::endl;
    }
    double result =(double) num1 / num2;
    std::cout << result << std::endl;
}
