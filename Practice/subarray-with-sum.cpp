#include <iostream>
using namespace std;

// Time Complixty: O(n)
bool subArraySum(int arr[],int n, int sum) {
	int curr_sum = arr[0], start = 0;

	for(int i = 1; i <=n ; i++) {

		if(curr_sum == sum) return true;

		if(i < n)
			curr_sum += arr[i];

		while(curr_sum > sum && start < i - 1) {
			curr_sum -= arr[start];
			start++;
		}
	}
	return false;
}

int main() {
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    cout << subArraySum(arr, n, sum);
    return 0;
}