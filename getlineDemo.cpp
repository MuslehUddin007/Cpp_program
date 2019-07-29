#include <iostream>
#include <string.h>

int main()
{
    char str[20];
    std::cout << "Enter you name : ";
    std::cin.getline(str,20);
    std::cout << "Your name is : " << str << std::endl;

    std::string s = "Md Musleh Uddin";
    char c[s.length()];
    strcpy(c,s.c_str());

    for(int i=0;i<s.length();i++){
        std::cout << "\" " << c[i] << " \",";
    }

    return 0;
}
