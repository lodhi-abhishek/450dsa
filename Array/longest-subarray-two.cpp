/*
The efficient approach is to use Dynamic Programming(DP). 
This problem is the variation of the Longest Common Subsequence(LCS). 
Let the input sequences are A[0..n-1] and B[0..m-1] of lengths m & n respectively. 

Following is the recursive implementation of the equal subarrays: 

Since common subarray of A[] and B[] must start at some index i and j such that A[i] is equals to B[j]. 
Let dp[i][j] be the longest common subarray of A[i…] and B[j…].
Therefore, for any index i and j, if A[i] is equals to B[j], then dp[i][j] = dp[i+1][j+1] + 1.
The maximum of all the elements in the array dp[][] will give the maximum length of equal subarrays.
*/

#include <bits/stdc++.h>
using namespace std;

int findMaxlength(vector<int>& A, vector<int>& B) {

    int n = A.size(), m = B.size();
    vector<vector<int> > dp(n+1,vector<int>(m+1,0));


    for(int i = n -1; i >= 0; i--) {
        for(int j = m - 1; j >= 0; j--) {
            if(A[i] == B[j])
                dp[i][j] += dp[i+1][j+1] + 1;
        }
    }

    int max_length = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0;j < m; j++) {
            max_length = max(max_length,dp[i][j]);
        }
    }

    return max_length;
}

int main() {
    vector<int> A = {1,2,8,2,1};
    vector<int> B = {8,2,1,4,7};

    cout << findMaxlength(A,B);
    return 0;
}