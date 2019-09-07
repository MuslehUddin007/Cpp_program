#include <iostream>
#include <forward_list>
using namespace std;

bool prime(const int &value){
    int i;
    for(i=2;i<value;i++){
        if(value % i == 0){
            return false;
            break;
        }
    }
    if(value == i){
        return true;
    }
}

int main()
{
    forward_list<int> flist = {2,4,6,7,9,11,13};
    flist.remove_if(prime);

    for(auto i = flist.begin(); i != flist.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}
