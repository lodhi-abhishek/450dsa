/*
Question Link
https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
*/

#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;

namespace BruteForce
{
    int getMaxArea(vector<int> &arr)
    {
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int left = i;  // Left pointer
            int right = i; // Right pointer

            while (arr[left] >= arr[i])
                left--;

            while (arr[right] >= arr[i])
                right++;

            if (left < 0)
                left = 0; // If left move out of range
            if (right > n - 1)
                right = n - 1; // If right move out of range

            ans = max(ans, (int)((right - left - 1) * arr[i]));
        }
        return ans;
    }
}

/*
 * Find left most smallest and right most smallest.
 * For each element width = right - left + 1 and area = width * heights[i].
 * Find the maximum area form the all area calculated for each index.
*/
namespace MyAnswer
{
    int getMaxArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;

        int leftsmall[n], rightsmall[n];
        for(int i = 0 ; i < n; i++) {
            while(!s.empty() && heights[s.top()] >= heights[i])
                s.pop();

            if(s.empty()) leftsmall[i] = 0;
            else leftsmall[i] = s.top() + 1;
            s.push(i); 
        }

        while(!s.empty()) s.pop();

        for(int i = n-1; i>=0; i--) {
            while(!s.empty() && heights[s.top()] >= heights[i]) 
                s.pop();
            if(s.empty()) rightsmall[i] = n-1;
            else rightsmall[i] = s.top() - 1;
            s.push(i);
        }

        int max_area = 0;
        for(int i = 0; i < n ; i++) {
            max_area = max(max_area,heights[i] * (rightsmall[i] - leftsmall[i] + 1));
        }

        return max_area;
    }
}


int main(void)
{
    vector<int> arr = {6, 2, 5, 4, 5, 1, 6};
    cout << BruteForce::getMaxArea(arr) << endl;
    cout << MyAnswer::getMaxArea(arr) << endl;
    return 0;
}
