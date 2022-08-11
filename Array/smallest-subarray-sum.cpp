#include <bits/stdc++.h>
using namespace std;


// O(n^2) Time complexity
int minSubArrayLen(int target, vector<int>& nums) {

	int n = nums.size(), distance = n + 1;

	for(int i = 0; i < n; i++) {
		int curr_sum = nums[i];
		// If first element is equal to the sum or greater
		if(curr_sum >= target) return 1;

		for(int j = i + 1; j <n ; j++) {

			curr_sum += nums[j];

			if(curr_sum >= target && (j - i + 1) < distance) {
				distance = j - i + 1;
			}
		}
	} 

	if(distance == n+1) 
		return 0;
	else
		return distance;
}

// Time Complexity: O(n)
int minSubArrayLenOptimize(int target, vector<int>& nums) {

}

int main() {
	// vector<int> nums = {2,3,1,2,4,3};
	// int target = 7;
	vector<int> nums= {1,4,4};
	int target = 4;

	cout << minSubArrayLen(target,nums);
	return 0;
}
