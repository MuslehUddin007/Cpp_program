#include<iostream>
#include<iomanip>

int main()
{
	int num1,num2;
	
	std::cin >> num1 >> num2;
	std::cout << std::noshowpoint;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	float sum = num1 + num2;
	std::cout <<std::setw(20)<< "Sum is : " <<sum <<std::endl;
	
	std::cout << std::showpoint;
	float sub = num1 - num2;
	std::cout << std::setw(20) <<"Subtraction is : " << sub << std::endl;
	
	float mul = num1 * num2;
	std::cout << std::setw(20) << "Multiplication is : " << mul << std::endl;
	
	float div = num1 / num2;
	std::cout << std::setw(20) << "Division is : " << div << std::endl;
}
