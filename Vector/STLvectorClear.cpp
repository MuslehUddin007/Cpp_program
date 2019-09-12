#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it1,it2;
    it1 = vec.begin();
    it2 = vec.end();
    vec.erase(it1,it2);

    for(auto i=vec.begin();i!=vec.end();i++){
        cout << *i << " ";
    }
    return 0;
}
