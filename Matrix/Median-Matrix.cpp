#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

// O(nlogn) +

int median(vector<vector<int>>&M,int r,int c) {

    vector<int> arr;
    for(int i = 0 ; i < r; i++)
        for(int j = 0; j < c; j++)
            arr.push_back(M[i][j]);

    sort(arr.begin(),arr.end());
    int n = (r*c)/2;

    return arr[n];
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> M = {{1,3,5},{2,6,9},{3,6,9}};
    int r = M.size();
    int c = M[0].size();

    cout << median(M,r,c) << endl;
    return 0;
}
