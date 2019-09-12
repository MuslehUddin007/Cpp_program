#include <iostream>
#include <conio.h>

int x = 1;

void t(int n,char beg, char aux, char end){
    if(n==1){
        std::cout << "Step " << x << " : "<<beg << " --> " << end <<std::endl;
        x++;
    }
    else{
        t(n-1,beg,end,aux);
        t(1,beg,aux,end);
        t(n-1,aux,beg,end);
    }
}

int main()
{
    std::cout << "Moves" << std::endl;
    t(4,'a','b','c');

    getch();
    return 0;
}
