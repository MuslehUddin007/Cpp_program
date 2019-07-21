#include <iostream>
#include <string>

int main()
{
    //normal string//
    std::string string1 = "Hello \n world\n";
    //row string//
    std::string string2 = R"(Hello \n world\n)";

    std::cout << "Normal String : " << string1 << std::endl;
    std::cout << "Row String : " << string2 << std::endl;
    return 0;
}
