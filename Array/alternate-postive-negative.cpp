#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(int arr[],int n) {

    vector<int> positive; vector<int> negative;
    vector<int> result(n);
    for(int i = 0; i <n ;i++) {
        if(arr[i] < 0)
            negative.push_back(arr[i]);
        else
            positive.push_back(arr[i]);
    }
    int left = 0, right = 0;
    int i = 0;
    while(left <positive.size() && right< negative.size()) {
        result[i] = positive[left];
        ++i;
        ++left;
        // result[i++] = positive[left++];
        // result[i++] = negative[right++];
        result[i] = negative[right];
        ++i;
        ++right;
    }

    while(left<positive.size()) result[i++] = positive[left++];

    while(right<negative.size()) result[i++] = negative[right++];

    return result;
}

int main() {
    // int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> tmp = rearrange(arr,n);
    for(int i: tmp)
        cout << i << " ";
    cout << endl;
    return 0;
}