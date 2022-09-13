#include <bits/stdc++.h>
using namespace std;	

bool isPalindrome(string S) {
	    int first = 0, last = S.length() -1;
	    
	    while(first < last) {
	        
	        if(S[first] != S[last])
	            return false;
	            
	       first++;
	       last--;
	    }
	    return true;
}

int main() {
    string s = "abba";
    cout << isPalindrome(s) << "\n";
    return 0;
}