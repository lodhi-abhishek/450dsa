#include <iostream>
#include <vector>
using namespace std;
/*
    1  3  5  7   
    10 11 16 20
    23 30 34 60

    they are sorted so to find we can apply binary search

    Now l = 0 and r = n*m - 1 [i.e 60]

    To find the index[ie row and column] of the mid element we find use binary search
    The respective row of the element can be calculated using  = mid / m;
    The respective column of the element can be calculated using = mid % m;

    Imagine This matrix in a 1D array 

    1 3 5 7 10 1 16 20 23 30 24 60

    0 1 2 3 4  5 6  7  8  9  10 11
*/

bool searchMatrix(vector<vector<int>> & matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int l = 0, r = (m * n) - 1;

        while( l<= r) {
            int mid = (l + (r - l) / 2);

            if(matrix[mid/m][mid%m] == target) 
                return true;
            
            if(matrix[mid/m][mid%m] < target)
                l = mid + 1;
            else 
                r = mid - 1;
        }
    return false;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 11;

    cout << searchMatrix(matrix,target) << endl;
    return 0;
}