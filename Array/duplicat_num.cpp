#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"

class Solution {
public:
	int findDuplicate(std::vector<int> &nums) {
		map<int,int> a;
        int s;
        for(int i=0;i<(int)nums.size();++i) 
            a[nums[i]]++;
        
        map<int,int>::iterator it;
        
        for(it=a.begin();it!=a.end();++it)
            if( it->second > 1) s = it->first;

        return s;
	}
}s;

int main() {
	std::vector<int> v = {2,2,2,2,2};

	cout << s.findDuplicate(v) << endl;
	return 0;
}