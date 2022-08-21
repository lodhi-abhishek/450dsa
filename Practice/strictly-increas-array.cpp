#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

/*
 [1, 7, 2, 3] - we should remove 7 when we analyze [7, 2]
 [6, 7, 2, 3] - we can't remove 7 when we analyze [7, 2] because 2 <= 6
*/
bool canBeIncreasing(vector<int>& nums) {

    int previous = nums[0];
    bool removed_element = false;

    for(int i = 1; i < (int)nums.size(); i++) {

        if(nums[i] <= previous) { // Check if Not Strictly Increasing

            if(removed_element) // Check if we already removed an element
                return false;

            
            // This is removal process if arr[i-1] is greater
            // Removed and update the new value
            if(i == 1|| nums[i] > nums[i-2]) 
                previous = nums[i];

            /*
                nums[i-2] = Element before nums[i-1] to check the condition 
                explained above in line 6 - 9
                and i == 1 if nums[i-1] is the first
            */
            removed_element = true;
        }

        else {
            previous = nums[i];
        }
    }

    return true;
}

int main() {
    // vector<int> nums = {1,2,10,5,7};
    vector<int> nums = {2,3,1,2};
    cout << canBeIncreasing(nums) << endl;
    return 0;
}