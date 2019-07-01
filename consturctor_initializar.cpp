#include<iostream>

class student
{
public:
    const int admissionFee;
    const int examFee;

    student(int x,int y)
    : admissionFee(x),examFee(y)
    {
        std::cout<<admissionFee<<std::endl;
        std::cout<<examFee<<std::endl;
    }
};

int main()
{
    student ob(25500,12000);
}
