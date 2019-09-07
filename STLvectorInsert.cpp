#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 5;
    int colom[] = {5,3,4,2,1};

    vector<vector<int>> vec(row);     //define the size of vector//

    for(int i=0;i,row;i++){
        int col ;
        col = colom[i];
        vec[i] = vector<int>(col);
        for(int j=0;j<col;j++){
            vec[i][j] = j+1;
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<vec[i].size();j++){
            cout << vec[i][j] << " ";
        }
        cout<<endl;
    }
}
