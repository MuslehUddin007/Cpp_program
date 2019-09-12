#include <iostream>
#include <conio.h>

int isArrayInSortedOrder(int arr[],int n){
    if(n==1)
        return 1;
    return (arr[n-1] < arr[n-2]) ? 0 : isArrayInSortedOrder(arr,n-1);
}

int main()
{
    int arr[] = {4,6,8,10,12};
    int x = isArrayInSortedOrder(arr,5);

    if(x==1)
        std::cout << "Yes" ;
    else
        std::cout << "No";

    getch();
    return 0;
}
