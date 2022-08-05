/*

Given a circularly sorted array of distinct integers, find the total number of times the array is rotated. You may assume that the rotation is in anti-clockwise direction.

Input: [8, 9, 10, 2, 5, 6]
Output: 3

Input: [2, 5, 6, 8, 9, 10]
Output: 0

*/

class Solution
{
public:
	int findRotationCount(vector<int> const &arr)
	{
		int first = arr[0];
		vector<int> nums(arr.begin(),arr.end());
		sort(nums.begin(),nums.end());
		
		if(first == nums[0]) return 0;
		
		for(int i=0;i<nums.size();i++) {
			if(first == nums[i]) {
				return (int)nums.size() - i; // For anti-clockwise
				// return i - 1; // for clockwise
			}
		}
		return 0;
	}
};
