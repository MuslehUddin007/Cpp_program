#include <iostream>
using namespace std;

//pass by value//
/*void PrintFromFunction(int arr[2][3]){
    cout << arr[0][2] << endl;
}*/

//pass by reference//
void PrintFromFunction(int *arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << *((arr+i*n)+j) << " " ;
        }
    }
}

int main()
{
    int arr[2][3] = {{10,15,20},{50,55,60}};
    PrintFromFunction((int *)arr,2,3);

    return 0;
}
