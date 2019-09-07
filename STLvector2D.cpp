#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool sizecom(const vector<int> &v1, const vector<int> &v2){
    return v1.size() < v2.size();  //v1[1] --second row sort//
}

int main()
{
    vector<vector<int>> vect{{4,3},{1,5,6},{2}};

    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            cout << vect[i][j] << " ";
        }
        cout<<endl;
    }

    sort(vect.begin(),vect.end(),sizecom);  //sort matrix by column size//
    /*sort(vect.begin(),vect.end());*/          //sort matrix by row//
    /*sort(vect[0].begin(),vect[0].end());*/    //sort 1th row//
    cout << "After sort the matrix by size of column" <<endl;
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            cout << vect[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}
