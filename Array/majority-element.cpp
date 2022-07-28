#include <bits/stdc++.h>
using namespace std;

/*
Find elements that are more then floor n/k times
Boyer–Moore majority vote algorithm used
Step 1 – Find a candidate with the majority –

    1. Initialize a variable say i ,votes = 0, candidate = -1 
    2.Traverse through the array using for loop
    3. If votes = 0, choose the candidate = arr[i] , make votes=1.
        3.1 else if the current element is the same as the candidate increment votes
        3.2 else decrement votes.

Step 2 – Check if the candidate has more than N/2 votes –
    1. Initialize a variable count =0 and increment count 
    2. if it is the same as the candidate.
    3. If the count is >N/2, return the candidate.
    4. else return -1.
*/

// ⌊n / 2⌋
vector<int> MajorityElement(vector<int> &nums)
{

    int n = nums.size(), count = 0, element = -1, votes = 0;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            element = nums[i];
            votes = 1;
        }
        else if (element == nums[i]) {
            ++votes;
        }
        else
            --votes;
    }

    for(int i = 0; i < n; i++)
        if(nums[i] == element)
            ++count;

    if(count > n/2)
        result.push_back(element);
    else
        result.push_back(-1);

    return result;
}

// This function is for element ⌊ n/3 ⌋
int main(void) {

    vector<int> nums = {3, 2, 3};
    vector<int> result = MajorityElement(nums);

    for (int i : result)
        cout << i << " ";
    return 0;
}