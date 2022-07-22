#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
	public:

		// Resursion methods
		// https://www.enjoyalgorithms.com/blog/minimum-number-of-jumps-to-reach-end
		// O(n^n)
		/*int Min_jumps_recur(int *arr,int start,int end) {

			if(start >= end) return 0;

			int min_jump = -1;
			for(int i=1;i<=arr[start] && i<end;++i) {

				int jumps = 1 + Min_jumps_recur(arr,i+start,end);

				if(jumps < min_jump) min_jump = jumps;
			}			
			return min_jump;
		}*/
		// O(n)

		int Min_jumps_dp(int *arr,int n) {

			if(n <= 1) return 0;

			if(arr[0] == 0) return -1;

			int max_rech = arr[0];
			int jump = 1,step = arr[0];

			for(int i=1;i<n;++i) {
				if(i == n-1) return jump;

				max_rech = max(max_rech,i+arr[i]);
				step--;

				if(step == 0) {
					jump ++;

					if(i>=max_rech) return -1;
					step = max_rech - i;
				}
			}
			return -1;
		}
};

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t,n,arr[100];
	cin >> t;

	while(t--) {
		cin >> n;
		for(int i=0;i<n;++i) cin >> arr[i];

		Solution obj;
		// cout << obj.Min_jumps_recur(arr,0,n-1) << "\n";
		cout << obj.Min_jumps_dp(arr,n) << "\n";
	}
	return 0;
}
