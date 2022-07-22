#include <bits/stdc++.h>
using namespace std;

bool SubArraySum(int arr[], int n) {
    unordered_set<int> s;

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += arr[i];

        if(sum == 0 || s.find(sum)!= s.end())
            return true;

        s.insert(sum);
    }
    return false;
}

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout  << SubArraySum(arr,n);
    return 0;
}