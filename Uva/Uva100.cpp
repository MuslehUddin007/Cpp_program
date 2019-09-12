#include <iostream>
#include <cstdio>
using namespace std;


int fun(int n,int counter){
    if(n==1){
        counter++;
        return counter;
    }
    if(n%2==1){
        counter++;
        return fun((3*n+1),counter);
    }
    else{
        counter++;
        return fun((n/2),counter);
    }
}

int main()
{
    int a=0,b=0,counter=0,max=0;

    while((scanf("%d %d",&a,&b)) != EOF ){
        cout << a << " " << b << " ";
    if(b>a)
        swap(a,b);

    for(int i=a;i>=b;i--){
        counter = fun(i,0);
        if(max<counter){
            max = counter;
        }
    }

    cout << max << endl;
    }

    return 0;
}
