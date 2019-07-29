#include <iostream>

void fk(size_t n){
    if(n<0){
        n = -n;
        std::cout << n << std::endl;
        return;
    }
    std::cout << n << std::endl;
}

int main()
{
    fk(10);
    return 0;
}
