#include <iostream>
#include <sstream>
#include <map>
#include <iterator>
using namespace std;

void printFrequency(string str1)
{
    map<string,int> FW;
    stringstream str2(str1);
    string Word;

    while(str2 >> Word){
        FW[Word]++;
    }

    map<string,int>::iterator m;
    for(m = FW.begin(); m != FW.end();m++){
        cout << m->first << " -> " << m->second << endl;
    }
}

int main()
{
    string s = "Geeks for Geeks IDE Geeks";
    printFrequency(s);
    return 0;
}
