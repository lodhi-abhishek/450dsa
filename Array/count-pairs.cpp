#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int getPairsCount(int arr[],int n,int k) {

    // O(n^2) Approach
    /*
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == k)
                ++count;
        }
    }
    */
    // O(n) Approach
    /*
    1. Using map to count the frequeny of number 
    2. for loop check for it can be combined with other element to get the sum.
    3. We have counted pair twiced hence with divide by 2
    */
    int count = 0;
    unordered_map<int,int> m;

    for(int i = 0 ; i < n; i++)
        m[arr[i]]++;

    for(int i = 0; i < n; ++i) {
        count += m[k - arr[i]];

        if(k - arr[i] == arr[i]) 
            --count;
    }
    return count/2;
}

int main(void) {
    int arr[] = {1,5,7,8};
    int k = 6 , n = sizeof(arr)/sizeof(arr[0]);
    
    cout << getPairsCount(arr,n,k) << endl;

    return 0;
}