#include <iostream>
#include <sstream>
using namespace std;

int countWords(string str){
    stringstream s(str);
    string word;

    int count = 0;
    while(s >> word){
        count++;
    }
    return count;
}

int main()
{
    string s = "geeks for geeks what you want ?";
    cout << "Number of words are: " << countWords(s) << endl;
    return 0;
}
