#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
typedef long long ll;

/*
https://youtu.be/LuLCLgMElus
*/
/*
 * https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order
 *
 * This  algorithm is given by Narayana Pandita
 *
 * 1. Find the largest index k such that arr[k] < arr[k+1]
 * 2. find the largest index(l) condition:l>k such that arr[k] < arr[l]
 * 3. swap(arr[k],arr[l])
 * 4. reverse sub-array arr[k+1]:end
 *
 * */

void permuatate(vector<int>& arr) {
	int n = arr.size(),k,l;

	for(k=n-2;k>=0;k--) {
		if(arr[k] < arr[k+1]) {
			break;
		}
	}

	if(k <0) reverse(arr.begin(),arr.end());

	else {
		for(l=n-1;l>k;l--) {
			if(arr[l] > arr[l+1]) {
				break;
			}
		}
		swap(arr[k],arr[l]);
		reverse(arr.begin()+k+1,arr.end());
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr = {3,2,1};

	// Using in-built next_permutation
	/*	
	next_permutation(arr,arr+3);
	for(int i:arr) cout << i << " ";
	*/
	permuatate(arr);
	for(int i:arr) cout << i << " ";
	return 0;	
}
