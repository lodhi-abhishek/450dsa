#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> & matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    int l = 0, r = m * n - 1;

    while(l != r) {
        int mid = (l + r - 1) >> 1;

        if(matrix[mid/m][mid % m] == target)
            l = mid + 1;
        else 
            r = mid;
    }

    return matrix[r/m][r%m] == target;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 13;

    cout << searchMatrix(matrix,target) << endl;
    return 0;
}