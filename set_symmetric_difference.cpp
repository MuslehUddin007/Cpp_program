#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int first[] = {5,10,15,20,25};
    int second[] = {50,40,30,20,10};

    std::vector<int> v(10);
    std::vector<int>::iterator it, st;
    //Sorting both the arrays
    std::sort(first,first+5);
    std::sort(second,second+5);

    it = std::set_symmetric_difference(first,first+5,second,second+5,v.begin());

    std::cout << "The symmetric difference has" << (it - v.begin()) << " elements:\n";
    for(st = v.begin();st!=it;++st){
        std::cout << ' ' << *st;
    }
    std::cout << '\n';
}
