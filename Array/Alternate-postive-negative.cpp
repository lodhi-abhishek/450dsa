#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(int arr[],int n) {

    int i = 0 , j = n - 1;
}

int main() {
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    // int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> tmp = rearrange(arr,n);
    for(int i: tmp)
        cout << i << " ";
    cout << endl;
    return 0;
}