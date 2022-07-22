#include <bits/stdc++.h>
using namespace std;

/* Using O(n*n) */
/*
int inversion(int *arr,int n) { 
	int count = 0; 
	for(int i = 0;i<n-1;++i) { 
		for(int j = i+1;j<n;++j) {
			if(arr[i] > arr[j])
				++count;
		}
	}
	return count;
}
*/

/*Using O(nlogn)*/
int merge(int *arr,int *tmp,int l,int mid,int r) {
	int count = 0;

	int i = l, j = mid + 1, k = l;

	while((i <= mid) && (j <= r)) {

		if(arr[i] <= arr[j]) {
			tmp[k++] = arr[i++];
		}
		else {
			tmp[k++] = arr[j++];

			count = (mid + 1) - i;
		}
	}

	while(i <= mid) tmp[k++] = arr[i++];
	while(j <= r) tmp[k++] = arr[j++];

	for(int m=l;m<=r;m++) arr[m] = tmp[m];
	return count;
}

int mergesort(int *arr,int *tmp,int left,int right) {

	int mid, count = 0;

	if( left < right) {
		mid = (left + right)/2;
		count +=mergesort(arr,tmp,left,mid);
		count +=mergesort(arr,tmp,mid+1,right);
		count +=merge(arr,tmp,left,mid,right);
	}
	return count;
}

int main(void) {
	// int arr[] = {2,4,1,3,5};
	int arr[] = {5,4,3,2,1};
	// int arr[] = {10,10,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int tmp[n];
	cout << mergesort(arr,tmp,0,n-1) << endl;
	return 0;
}
