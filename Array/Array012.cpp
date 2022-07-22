#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

typedef long long ll;

int main(void) {
	int count0=0,count1=0,count2=0,n,a[1000];

	cin >> n; for(int i=0;i<n;++i) cin >> a[i];

	for(int i=0;i<n;++i) {
		if(a[i] == 0) count0++;
		else if(a[i] == 1) count1++;
		else count2++;
	}
	int i;
	for(i =0;i<count0;++i) a[i] = 0;
	for(i=count0;i<count0+count1;++i) a[i] = 1;
	for(i=count0+count1;i<n;++i) a[i] = 2;

	for(i=0;i<n;++i) cout << a[i] << " ";
	cout << endl;
	return 0;
}
