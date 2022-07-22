#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;


void move(int *arr,int *tmp,int n) {
	int tmp_loc = 0;
	for(int i=0;i<n;++i) 
		if(arr[i] >= 0) // If i want +ve no first
			tmp[tmp_loc++]=arr[i];

	if(tmp_loc==0 || tmp_loc == n) return;

	for(int i=0;i<n;++i)
		if(arr[i] < 0)
			tmp[tmp_loc++]=arr[i];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,arr[100];
	cin >> n;
	for(int i=0;i<n;++i) cin >> arr[i];


	int tmp[100];
	move(arr,tmp,n); 

	for(int i=0;i<n;++i) cout << tmp[i] << " ";
	cout << endl;
	
	return 0;
}
