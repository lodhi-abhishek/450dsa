// For Find sub array with max sum
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int kadanes(int arr[],int n) {
	int max_sum = INT_MIN, curr_sum = 0;

	for(int i=0;i<n;++i) {
		curr_sum += arr[i];

		if(curr_sum > max_sum) max_sum = curr_sum;
		if(curr_sum < 0) curr_sum =0;
	}
	return max_sum;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[] = {-2,-3,4,-1,-2,1,5,-3},n = 8;
	cout << kadanes(arr,n) << endl;
	return 0;
}
