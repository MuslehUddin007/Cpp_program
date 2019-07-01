#include<iostream>
using namespace std;

main()
{
    char a[7],b[7];
    cout << "Enter the first string: ";
    cin.getline(a,7,'#');
    cout << "Enter the second string: ";
    cin.getline(b,7,'$');
    cout << "The entered string are "<<a<<b;

    char x,y;
    cout << "Enter your first name: ";
    x = cin.get();
    cin.sync(); // cin.putback //
    cout << "Enter your second name: ";
    y = cin.get();
    cout << "Your signature : "<<x<<y;
}
