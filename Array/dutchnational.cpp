#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

class Solution {
	public:
		void sort012(int *arr,int n) {
			int low = 0;
			int mid = 0;
			int high = n - 1;

			while(mid <= high) {
				if(arr[mid] == 0) {
					swap(arr[low],arr[mid]);
					low++;
					mid++;
				}		
				else if(arr[mid] == 1) mid++;
				else {
					swap(arr[mid],arr[high]);
					high--;
				}
			}
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
		obj.sort012(arr,n);

		for(int i=0;i<n;++i) cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
