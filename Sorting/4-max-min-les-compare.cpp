#include <iostream>
using namespace std;

void getMaxMin(int *arr,int n) {
    int max, min;

    if(n == 1) {
        min = arr[0];
        max = arr[0];
    }

    if(arr[0] > arr[1]) {
        max = arr[0];
        min = arr[1];
    }
    else if(arr[0] < arr[1]) {
        max = arr[1];
        min = arr[0];
    }

    for(int i = 2;i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
        else if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Max -> " << max  << "\n";
    cout << "Min ->" << min << "\n";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {1000,11,445,1,330,3000} , n = sizeof(arr)/sizeof(arr[0]);
    getMaxMin(arr,n);

    return 0;
}