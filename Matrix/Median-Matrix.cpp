#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// O(nlogn) + O(n*n) 

int median_BruteForce(vector<vector<int>>&M,int r,int c) {
    vector<int> arr;
    for(int i = 0 ; i < r; i++)
        for(int j = 0; j < c; j++)
            arr.push_back(M[i][j]);

    sort(arr.begin(),arr.end());
    int n = (r*c)/2;

    return arr[n];
}

int main(void) {

    vector<vector<int>> M = {{1,3,5},{2,6,9},{3,6,9}};
    int r = M.size();
    int c = M[0].size();

    cout << median_BruteForce(M,r,c) << endl;
    return 0;
}
