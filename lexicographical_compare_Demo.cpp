#include <iostream>
#include <algorithm>

using namespace std;

bool comp(char s1, char s2)
{
    return tolower(s1) < tolower(s2);
}

int main()
{
    char one[] = "mdmuslehuddinkhan";
    char two[] = "Mmuk";

    if(lexicographical_compare(one,one+17,two,two+4,comp))
        cout << "Md Musleh Uddin Khan"
                " lexicographically less";
    else
        cout << "Md Musleh Uddin Khan"
                " not lexicographically less";
}
