#include <bits/stdc++.h>
using namespace std;

int FindMinDiffOptimize(int arr[],int n,int m);

int main() {
	int arr[] = {3,4,1,9,56,7,9,12};
	int n = 8;
	int m = 5;

	cout << FindMinDiffOptimize(arr,n,m);
	return 0;
}

/* Algorithm For Optmized Solution:
 * Time Complexity : O(nlog(n))
 *
 * Sort the array first
 * Loop throught the array Find the subarray with length m
 * Then find the min of all difference we get through every iteration
 *
 * */

int FindMinDiffOptimize(int arr[],int n,int m) {
	
	// If No Students to distribute
	if(m == 0 || n == 0)
		return 0;
	
	if(m > n) // If packets are less then no of students 
		return -1;
	
	sort(arr,arr+n);
	int min_diff = INT_MAX;
	
	/* i + m - 1 
	 * starting from any index i total length of subarray should be m.
	 * i + m is size of sub-array equal to size of students 
	 * -1 is used for index 
	 *
	 * */
	for(int i = 0; i + m - 1 < n; i++ ) { 
		min_diff = min(min_diff, arr[i+m-1] - arr[i]);	
	/*
		int diff = arr[i+m-1] - arr[i];
		if(min_diff > diff) {
			min_diff = diff;
			// Here we can store the index of min diff to find sub array
		}
	*/
	}
	return min_diff;
}
