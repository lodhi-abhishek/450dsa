#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int *tmp,int left,int mid,int right) {

	int i = left, j = mid+1, k = left;

	while(i <= mid && j <= right) {
		if(arr[i] < arr[j]) {
			tmp[k++] = arr[i++];	
		}
		else {
			tmp[k++] = arr[j++];
		}
	}

	while(i <= mid) tmp[k++] = arr[i++];
	while(j <= right) tmp[k++] = arr[j++];

	for(int i=left;i<=right;++i) arr[i] = tmp[i];
}

void mergesort(int *arr,int *tmp,int left,int right) {

	int mid;

	if( left < right) {
		mid = (left + right)/2;
		mergesort(arr,tmp,left,mid);
		mergesort(arr,tmp,mid+1,right);
		merge(arr,tmp,left,mid,right);
	}
}

int main(void) {

	int arr[] = {5,3,2,4,1,8,9,10,25,23,20,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	int tmp[n];
	mergesort(arr,tmp,0,n-1);

	for(int i=0;i<n;++i) cout << arr[i] << " ";
		cout << "\n";
	return 0;
}