/*
Question Link
https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
*/

#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;


namespace BruteForce {
    int getMaxArea(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int left = i; // Left pointer
            int right = i; // Right pointer

            while(arr[left] >= arr[i]) 
                left--;

            while(arr[right] >= arr[i]) 
                right++;

            if(left < 0) left = 0; // If left move out of range
            if(right > n - 1) right = n -1; // If right move out of range

            ans = max(ans,(int)((right - left - 1) * arr[i]));
        }
        return ans;
    }
}

/*
    Find left most smallest and right most smallest.
    For each element width = right - left + 1 and area = width * arr[i].
    Find the maximum area form the all area calculated for each index.
*/
namespace Optimze {
    int getMaxArea(vector<int>& arr) {
        int n = arr.size(); 
        stack<int> s;
        int left_smallest[n], right_smallest[n];        

        // For left_smallest 
        for(int i = 0 ; i < n; i++) {
            while(!s.empty() && arr[s.top()] >= arr[i]) 
                s.pop();

            if(s.empty()) left_smallest[i] = 0; 
            else {
                left_smallest[i] = s.top() + 1;
            }
            s.push(i);
        }

        while(!s.empty()) s.pop();

        // For Right_smallest
        for(int i = n - 1; i >=0; --i) {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();

            if(s.empty()) right_smallest[i] = n-1;
            else {
                right_smallest[i] = s.top() - 1;
            }
            s.push(i);
        }
        
        int area = 0;

        for(int i = 0 ; i < n; i++) {
            area = max(area, (right_smallest[i] - left_smallest[i] + 1) * arr[i]);
        } 
        return area;
    }
}

int main(void) {

    vector<int> arr= {6,2,5,4,5,1,6};    

    cout << Optimze::getMaxArea(arr) << endl;
    return 0;
}