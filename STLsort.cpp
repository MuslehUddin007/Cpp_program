#include <iostream>
#include <algorithm>
#include <conio.h>

struct Interval{
    int start;
    int end;
};

bool compareInterval(Interval i1, Interval i2){
    return (i1.start < i2.start);
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {1,5,8,9,6,7,3,4,2,0};
    Interval arr1[] = {{6,8},{1,9},{2,4},{4,7}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr1) / sizeof(arr1[0]);

    std::sort(arr,arr+n);
    std::cout << "After sort the array : " << std::endl;
    display(arr,n);

    std::sort(arr,arr+n,std::greater<int>());
    std::cout << "\nAfter sort in descending order :" << std::endl;
    display(arr,n);

    std::sort(arr,arr+n,compareInterval);
    std::cout << "\nIntervals sorted by start time : " << std::endl;
    for(int i=0;i<m;i++){
        std::cout << "[" << arr1[i].start << "," << arr1[i].end << "] ";
    }

    return 0;
}
