#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
/*
	1. Sort the given array.
	2. Loop over the array and fix the first element of the possible triplet, arr[i].
	3. Then fix two pointers, one at i + 1 and the other at n – 1. 
		If the sum is smaller than the required sum, increment the first pointer.
		Else, If the sum is bigger, Decrease the end pointer to reduce the sum.
		Else, if the sum of elements at two-pointer is equal 
			to given sum then return true break.

	Time Complexity: O(n^2)
*/

bool findtriplet(int arr[],int n,int k) {

	sort(arr,arr+n);

	int l,r;

	for(int i = 0; i < n; i++) {

		l = i + 1;
		r = n - 1;

		while(l < r) {
			if(arr[i] + arr[l] + arr[r] == k)
				return true;

			else if(arr[i] + arr[l] + arr[r] < k)
				l++;
			else
				r--;
		}
	}
	return false;
}

int main(void) {

	int arr[] = {1,4,45,6,10,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 13;

	cout << findtriplet(arr,n,k);
	return 0;
}


/*
	for(i = 0 ; i < n; i++) {
		for(j = i+1; j< n; j++) {
			for(K = J+1;k<n;k++) {
				
				if(arr[i] + arr[j] + arr[k] == sum)
					return true;
			}
		}
	}
	return false;

	time complexity: O(n^3)
*/