#include <iostream>
#define my_sizeof1(type) ((char *)(&type+1)-(char*)(&type))
#define my_sizeof2(array) sizeof(array)/sizeof(array[0])

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    //Own sizeof1//
    int size1 = my_sizeof1(arr)/my_sizeof1(arr[0]);
    //pointer hack//
    int size2 = *(&arr + 1) - arr;
    //Own sizeof2//
    int size3 = my_sizeof2(arr);

    std::cout << "My sizeof1 : " << size1 << std::endl;
    std::cout << "Using pointer : " << size2 << std::endl;
    std::cout << "My sizeof2 : " << size3 << std::endl;
}
