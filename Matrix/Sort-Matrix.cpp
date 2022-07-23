#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

typedef long long ll;

namespace BruteFroce{
    vector<vector<int>> SortMatrix(vector<vector<int> >& mat,int N) {
    vector<int> arr;

    for(int i=0; i < N ; i++){
        for(int j=0; j < N ; j++){
            arr.push_back(mat[i][j]);
        }
    }
   
    sort(arr.begin() , arr.end());
    vector<vector<int>> ans(N);

    for(int i=0; i < N*N ; i++){
        ans[i/N].push_back(arr[i]);
    }
    return ans;  
    }
}

// namespace Optmize {
//     vector<vector<int>> SortMatrix(vector<vector<int> >& arr,int n) {}
// }

int main(void) {
    vector<vector<int> > arr = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n = arr.size();

    vector<vector<int> > Matrix =  BruteFroce::SortMatrix(arr,n);
    // vector<vector<int> > Matrix =  Optmize::SortMatrix();

    for(auto i: Matrix) {
        for(int j:i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}