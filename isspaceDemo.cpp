#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;

void space(string& str)
{
    int counts = 0;
    int length = str.length();
    for(int i=0;i<length;i++){
        int c = str[i];
        //cout << c << endl;//
        if(isspace(c)){ //when c=32,it enter in//
            counts++;   //into the condition//
        }
    }
    cout << counts;
}

int main()
{
    string str = "Md Musleh Uddin Khan Akil";
    space(str);


    return 0;
}
