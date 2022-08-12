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

			/* j - i + 1 givesn end - start + 1 */

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

	if(nums.size() == 0) return 0;

	int i = 0, j = 0, curr_sum = 0, min_distance = INT_MAX;
	// i -> Start pointer & j -> End pointer

	while(j < (int)nums.size()) {

		/* 
		increase curr_sum with num[end pointer] and increase
		end pointer. 
		*/
		curr_sum += nums[j++];

		while(curr_sum >= target) {
			min_distance = min(min_distance,j - i);
			/* 
			move start pointer ahead to changed subarray
			   i     j    i    j
			eg 1 2 3 4 -> 2 3 4
			*/
			curr_sum -= nums[i++];
		}
	}
	return (min_distance == INT_MAX)?0:min_distance;
}

int main() {
	// vector<int> nums = {2,3,1,2,4,3};
	// int target = 7;
	vector<int> nums= {1,4,4};
	int target = 4;

	cout << "O(n^2) -> "<< minSubArrayLen(target,nums) << "\n";
	cout << "O(n) -> " << minSubArrayLenOptimize(target,nums) << "\n";
	return 0;
}
