#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist = {10,20,30};
    forward_list<int>::iterator ptr;

    ptr = flist.insert_after(flist.before_begin(),{1,2,3}); //before_begin() --at 0 position//
    //ptr = flist.insert_after(flist.begin(),{1,2,3}); --at 1 position//
    ptr = flist.insert_after(ptr,2,100);

    ptr = flist.emplace_after(ptr,99);
    ptr = flist.begin();
    ptr = flist.erase_after(ptr);

    flist.remove(100);
    flist.remove_if([](int x){return x>98;});

    //flist2.splice_after(flist2.begin(),flist1); // add two forward_list//

    cout << "The forward list after insert_after operation : ";
    for(int &a : flist)
        cout << a << " ";
    return 0;

    //flist1.merge(flist2); // add two forward_list//
    //flist1 = flist2// -- deep copy//
    //flist.sort()// --to sort forward_list//
    //flist.unique -- to remove duplicate value//
    //flist.reverse --to reverse the forward_list//
    //flist1.swap(flist2) --to swap two forward_list//
    //flist.clear() --to clear forward_list//
    //flist.empty() ? --to check forward_list is empty//
}
