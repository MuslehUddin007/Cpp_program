#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dec_num = "9874654";
    cout << "Dec_Num : " << stol(dec_num,nullptr,10) << endl;

    string hex_num = "FFFFFFF";
    cout << "Hex_Num : " << stol(hex_num,nullptr,16) <<endl;

    string binary_num = "10101101";
    cout << "Binary_Num : " << stol(binary_num,nullptr,2) << endl;

    return 0;
}
