#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist = {1,5,6,3,9,2};
    int sum = 0;
    while(!flist.empty()){
        sum += flist.front();
        flist.pop_front();
    }
    cout << "Sum : " << sum << endl;
    return 0;
}
