#include <cstring>
#include <iostream>

int main()
{
    char str[] = "parrot owl sparrow pigeon crow";
    char delim[] = " "; // ","
    std::cout << "The tokens are : " << std::endl;
    char  *token = strtok(str,delim);
    while(token){
        std::cout << token << std::endl;
        token = strtok(NULL,delim);
    }
}
