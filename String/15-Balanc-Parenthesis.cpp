#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
/*
 * The idea is to put all the opening brackets in the stack. W
 * Whenever you hit a closing bracket. 
 * Search if the top of the stack is the opening bracket of the same nature. 
 * 	If this holds then pop the stack and continue the iteration,
 * 	in the end if the stack is empty, 
 * 	it means all brackets are well-formed and return  Balanced
 * 	else return Not Balanced.
 * */

bool ispar(string x) {
	stack<char> temp;
	for(int i=0; i<(int)x.length(); i++) {
		if(temp.empty()) {
			temp.push(x[i]);
		}
		else if((temp.top() == '(' && x[i] == ')')
				|| (temp.top() == '{' && x[i] == '}')
				|| (temp.top() == '[' && x[i] == ']')) {
			temp.pop();
		}
		else {
			temp.push(x[i]);
		}
	}

	if(temp.empty())
		return true;
	return false;
}

int main(void) {
	string a = "{([])}";
	cout << ispar(a);
	return 0;
}
