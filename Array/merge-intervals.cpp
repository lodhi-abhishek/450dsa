#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

typedef long long ll;


vector<vector<int>> merge(vector<vector<int>>& intervals) {

	// Sort all intervals
	vector<vector<int>> merged;
	sort(intervals.begin(),intervals.end());

	if(intervals.size() ==0) return merged;

	vector<int> tmparr = intervals[0];

	for(auto i: intervals) {

		// [[1,3][2,4][6,7]]
			// |  |
		// 	---- comparing this [since 3 > 2 so in their intervals ]

		if(i[0] <= tmparr[1])
			tmparr[1] = max(i[1],tmparr[1]);

		else {
			merged.push_back(tmparr);
			tmparr = i;
		}
	}
	merged.push_back(tmparr);
	return merged;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};
	vector<vector<int>> b = merge(arr);

	for(auto i: b) {
		for(int j:i) cout << j << " ";
		cout << endl;
	}
	return 0;
}

