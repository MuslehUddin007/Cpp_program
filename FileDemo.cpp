#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);

    //file << "I am Musleh Uddin. I'm 20 year old" << endl;
    cout << "Enter your name : ";
    getline(cin,name);
    file <<"Welcome " << name << endl;
    file.close();

    return 0;
}

