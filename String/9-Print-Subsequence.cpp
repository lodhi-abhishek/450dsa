#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

unordered_set<string> st;

void subsequence(string str) {

	for(int i = 0; i < (int)str.length(); i++) {
		
		for(int j = (int)str.length(); j > i ; j--) {
			string sub_str = str.substr(i,j);
			st.insert(sub_str);

			for(int k = 1; k < (int)sub_str.length(); k++) {
				string sb = sub_str;

				sb.erase(sb.begin() + k);
				subsequence(sb);
			}
		}
	}
}
int main(void) {
	string s = "aabc";
	subsequence(s);

	for(auto i: st) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
