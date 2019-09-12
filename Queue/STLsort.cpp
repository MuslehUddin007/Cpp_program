#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {5,19,8,1,78,12,45,63,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+size);
    cout << "After sort the array : " << endl;
    print(arr,size);

    if(binary_search(arr,arr+size,45)){
        cout << "\nElement found in the array." << endl;
    }
    else{
        cout << "\nElement not found in the array." << endl;
    }


    return 0;
}

