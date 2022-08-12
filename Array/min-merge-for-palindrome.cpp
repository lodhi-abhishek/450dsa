/*
Given an array of positive integers. We need to make the given array a ‘Palindrome’. 
The only allowed operation is”merging” (of two adjacent elements). 
Merging two adjacent elements means replacing them with their sum. 
The task is to find the minimum number of merge operations required to make 
the given array a ‘Palindrome’.
*/
#include <iostream>
using namespace std;

/* Algorithm:
		i -> Start Pointer j->end Pointer
	1. if arr[i] == arr[j]
		do nothing only increase stat and decrease end
	2. if(arr[i] > arr[j])
		j --; 
		then arr[j] += arr[j-1]; count++; 
	3. else if(arr[j] > arr[i])
		i++;
		then arr[i] += arr[i-1]; count++;
	return count;
*/

int findMinMerge(int arr[],int n) {
	int start = 0, end = n - 1, count = 0;
	while(start < end) {
		if(arr[start] == arr[end]) {
			start++;
			end--;
		}

		else if(arr[start] > arr[end]) {
			end--;
			arr[end] += arr[end -1];
			++count;
		}

		else {
			start++;
			arr[start] += arr[start - 1];
			++count;
		}
	}
	return count;
}

int main() {
    int arr[] = {1, 4, 5, 9, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << findMinMerge(arr,n);
    return 0;
}