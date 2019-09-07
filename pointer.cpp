#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10,15,20};
    int *ptr;
    ptr = arr;

    /*for(int i=0;i<3;i++){
        cout << "Value of *ptr : " << *ptr << endl;
        cout << "Value of ptr : " << ptr << endl;
        ptr++;
    }*/

    //ArrayName as Pointer//
    cout << "Elements of array are : ";
    cout << ptr[0] <<" " << ptr[1] << " " << ptr[2] << endl;
}
