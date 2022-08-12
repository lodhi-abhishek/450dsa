#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

typedef long long ll;

/*
 *https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
 */
void permutate(int *arr,int l,int r){

	if (l == r) {
		for(int i=0;i<=r;++i) cout << arr[i]<< " ";
		cout << endl;
	}
	else {
		for(int i=l;i<=r;++i) {
			swap(arr[i],arr[l]);
			permutate(arr,l+1,r);
			swap(arr[l],arr[i]);
		}
	}
}

int main(void) {
	//int arr[] = {1,2,3};
	int arr[] = {1,2,3,4};

	int n = sizeof(arr)/sizeof(arr[0]);
	permutate(arr,0,n-1);
	return 0;
}
