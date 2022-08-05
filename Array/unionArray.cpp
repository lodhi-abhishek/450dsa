#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	set <int> a;

	cin >> n >> m;
	for(int i=0;i<n;++i) {
		int x; cin >> x;
		a.insert(x);
	}

	for(int i=0;i<m;++i) {
		int x; cin >> x;
		a.insert(x);
	}
	cout << a.size();
	/*
	for(set<int>::iterator it = a.begin();it!=a.end();++it) {
		cout << *it << " ";
	}
	*/
	return 0;
}
