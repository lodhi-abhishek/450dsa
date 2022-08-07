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
// Find the max and second max of both postive and negative numbers

pair<int,int> findpairs(int arr[],int n) {

	int postive_a = INT_MIN , postive_b = INT_MIN;
	int negative_a = INT_MIN , negative_b = INT_MIN;

	for(int i = 0; i < n; i++) {

		if(arr[i] > postive_a) {
			postive_b = postive_a;
			postive_a = arr[i];
		}
		else if(arr[i] > postive_b) {
			postive_b = arr[i];
		}

		if(arr[i] < 0 && abs(arr[i]) > abs(negative_a)) {
			negative_b = negative_a;
			negative_a = arr[i];
		}

		else if(arr[i] < 0 && abs(arr[i]) > abs(negative_b)) {
			negative_b = arr[i];
		}
	}

	if(negative_a * negative_b > postive_a * postive_b)
		return {negative_a,negative_b};
	else
		return {postive_a,postive_a};
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[] = {-10,-3,5,4,-2};
	int n = sizeof(arr)/sizeof(arr[0]);

	pair<int,int> result = findpairs(arr,n);
	cout << result.first << " " << result.	second << endl;
	return 0;
}