#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * To solve this problem we need to understand for max different one should be 
 * very low and other should be high. 
 *
 * We sort the random array to get the lowest to left and highest to right
 * We need to reduce height to the right by k
 * We need to increase height to the left by k
 *
 * 			<--------------------------- i --------------------->
 * 				+ k									- k 
 * Why you ask? 
 * Well stupid we just sorted it so by increasing one and decreasing other.
 * If we increase only the diff. won't changed like 4 - 2 is same as 6 - 4
 *
 *
 * To get min part find mininum of (arr[i]-k, arr[0]+k {The left most part})
 * To get max part find maximum of (arr[i-1] + k, arr[n-1] -k {the right most part})
 *
 * why arr[i-1]+k and compare it with arr[n-1]+k cause it want to prove that i-1 index 
 * is greater so reduce the n-1 that is greate due to sort and incrase i-1 
 * [Note: We are not conformed that this would happend but we want to happen to what why we did it] 
 *
 * Same for arr[i]-k and arr[0] +k cause i want to prove i is smaller then 0 
 * [Note: may be this won't happend but we do + & - to reach that] 
 *
 * k = 6
 * 		+k min -k
 *		 ________
 * 		|		 |
 * 		4  7  8  8  8  9 
 * 			  |________|
 *
 * 			  +k  max -k
 *
 * */
class Solution {
	public:
		int min_height(int arr[],int n,int k) {
			sort(arr,arr+n);

			int ans = arr[n-1] - arr[0]; // Max difference 

			int tmp_min = arr[0], tmp_max = arr[n-1];

			for(int i=1;i<n;++i) {

				if(arr[i]-k < 0) continue;

				tmp_min = min(arr[0]+k,arr[i]-k);
				tmp_max = max(arr[i-1]+k,arr[n-1]-k);

				ans = min(ans,tmp_max-tmp_min);
			}
			return ans;
		}
};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t,n,arr[100]; cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0;i<n;++i) cin >> arr[i];
		Solution obj;
		cout << obj.min_height(arr,n,2);
	}
	return 0;
}
