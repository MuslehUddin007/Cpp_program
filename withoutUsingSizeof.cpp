#include<iostream>

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = *(&arr+1) - arr;
    std::cout << "size of array : " << size << std::endl;

    return 0;
}
