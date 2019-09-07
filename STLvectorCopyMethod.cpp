#include <iostream>
#include <vector>
#include <algorithm>  //assign() and copy//
#include <iterator>   //back_inserter()//
using namespace std;

int main()
{
    vector<int> g1{1,2,3,4,5};
    vector<int> g2;

    /*for(int i=0;i<g1.size(); i++)   //first method//
        g2.push_back(g1[i]);*/

    /*g2 = g1;*/                     //second method//

    /*vector<int> g2(g1)*/           //third method//

    copy(g1.begin(),g1.end(),back_inserter(g2)); //forth method//

    /*g2.assign(g1.begin(),g1.end());*/              //fifth method//

    cout << "Old vector elements are : ";
    for (auto i=g1.begin(); i!=g1.end(); i++)
        cout << *i << " ";
    cout << endl;

    cout << "New vector elements are : ";
    for (auto i=g2.begin(); i!=g2.end(); i++)
        cout << *i << " ";
    cout<< endl;

    // Changing value of vector to show that a new
    // copy is created.
    g1[0] = 2;

    cout << "The first element of old vector is :";
    cout << g1[0] << endl;
    cout << "The first element of new vector is :";
    cout << g2[0] <<endl;

    return 0;
}
