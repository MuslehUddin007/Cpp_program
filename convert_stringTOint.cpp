#include <iostream>
#include <string>
int main()
{
    int i_value = 16;
    float f_value = 20.6;

    //convert number to string//
    std::string str1 = std::to_string(f_value);
    std::string str2 = std::to_string(i_value);

    std::cout << "Int to String : " << str2 << std::endl;
    std::cout << "Float to String : " << str1 << std::endl;

    //convert string to number//
    std::string str = "123";
    int n = std::stoi(str);
    std::cout << "String to Int : " << n << std::endl;

    return 0;
}
