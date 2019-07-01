#include "multable.h"
#include<iostream>

MulTable :: MulTable()
{
    std::cout << "I'm from constructor" << std::endl;
}
MulTable :: ~Multable()
{
    std::cout << "I'm from destructor" << std::endl;
}
void MulTable::display(int value)
{
    for(int i=1;i<=10;i++){
        std::cout << i << " X " << value << " = " << i*value << std::endl;
    }
}
