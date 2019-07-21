#include <iostream>
#include <string>

void reverseStr1(std::string str){
    for(int i=str.length()-1;i>=0;i--){
        std::cout << str[i];
    }
}
int main()
{
    std::string str1 = "Md Musleh Uddin Khan";
    std::string str2 = "Md Musleh Uddin Khan";
    reverseStr1(str2);
    return 0;
}
