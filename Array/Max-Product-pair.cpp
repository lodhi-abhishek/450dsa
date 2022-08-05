/*

Given an integer array, find a pair with the maximum product in it.
(
Each input can have multiple solutions. The output should match with either one of them.

Input : [-10, -3, 5, 6, -2]
Output: (-10, -3) or (-3, -10) or (5, 6) or (6, 5)

Input : [-4, 3, 2, 7, -5]
Output: (3, 7) or (7, 3)

If no pair exists, the solution should return the pair (-1, -1).

Input : [1]
Output: (-1, -1)

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// This done O(nlogn)

pair<int,int> findpair(int *arr,int n) {
	pair<int,int> result = {-1,-1};
	sort(arr,arr+n);

	int sum_neg = arr[0] * arr[1], sum_pos = arr[n-1] * arr[n-2];

	if(sum_neg > sum_pos) {
		result.first = arr[0];
		result.second = arr[1];
	}
	else {
		result.first = arr[n-1];
		result.second = arr[n-2];
	}
	return result;
}

// This is to be done in O(n)
// 
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[] = {-10,-3,5,4,-2};
	int n = sizeof(arr)/sizeof(arr[0]);

	pair<int,int> result = findpair(arr,n);
	cout << result.first << " " << result.	second << endl;
	return 0;
}