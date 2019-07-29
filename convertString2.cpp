#include <iostream>
#include <string>
using namespace std;

int main()
{
    string invalid_num = "ab587#@&";

    try{
        cout << stol(invalid_num) << endl;
    }catch(const std::invalid_argument){
        cerr << "Invalid Argument" << endl;
    }
}
