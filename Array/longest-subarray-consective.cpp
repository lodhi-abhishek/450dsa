#include <bits/stdc++.h>
using namespace std;

// O(nlogn) + O(n): Time Complexity
/*
 * Sort the array
 * Remove the multiple occurences of elements
 *
 * for star to the end 
 * check is current is equal to current element + 1
 * If True count ++ 
 * Update the max to the maximum to count, max
 * */
int findLongestConsectiveOn(int arr[],int n) {
    int ans = 0, count = 0;

    sort(arr,arr+n);
    vector<int> v;
    v.push_back(arr[0]);

    for(int i = 1; i < n; ++i ) {
        if(arr[i] != arr[i-1])
            v.push_back(arr[i]);
    }
    
    for(int i = 0; i < v.size(); i++) {

        if(i > 0 && v[i] == v[i - 1] + 1)
            count ++ ;
        else 
            count = 1;
        
        ans = max(ans,count);
    }
    return ans;
}

// O(n): Time Complexity
/*
 * 1. Using a set [ Or a Hash]
 * 2. Insert element to set or the hash
 * 3. Check for the following 
 *  3.1 Look for arr[i] -1 in the set; If not found this is first element of the subsequences
 *  3.2 If the element is the first then count the number of element consecutive iterate arr[i]+1
 *      till last element is found
 *  3.3 if count more than previous subsequences, then update that.  
 * */
int findLongestConsective(int arr[], int n) {
    unordered_set<int> S;
    int ans = 0;

    for(int i = 0; i < n; i++) 
        S.insert(arr[i]);
    
    for(int i = 0; i < n; i++) {
        if(S.find(arr[i] - 1) == S.end()) {
            int j = arr[i];
            while(S.find(j) != S.end())
                j++;

            ans = max(ans,j - arr[i]);
        }
    }
    return ans;
}

int main(void) {
    // int arr[] = {2,6,1,9,4,5,3};
    int arr[] = {1,9,3,10,4,20,2};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    // cout << findLongestConsectiveOn(arr,n) << endl;
    cout << findLongestConsective(arr,n) << endl;
    return 0;
}
