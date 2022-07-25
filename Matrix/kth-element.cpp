#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[][],int N,int k) {

}

int main(void) {
    int N = 4;
    int arr[N][N] = {{10, 20, 30, 40},{15, 25, 35, 45},{24, 29, 37, 48},{32, 33, 39, 50}};

	int k = 3; // 3rd smallest
	cout << kthSmallest(arr,k) << "\n";
	return 0;
}
