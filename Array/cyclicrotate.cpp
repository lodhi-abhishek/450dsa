#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void rotate(int *arr,int n) {
	/*using normal swap*/ 

	for(int i=0;i<n;++i){
		int tmp = arr[n-1];
		arr[n-1] = arr[i];
		arr[i] = tmp;
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t,n;
	cin >> t;

	while(t--) {
		cin >> n;
		int a[100];

		for(int i=0;i<n;++i) cin >> a[i];
		rotate(a,n);
		for(int i=0;i<n;++i) cout << a[i] << " ";
	}
	return 0;
}
