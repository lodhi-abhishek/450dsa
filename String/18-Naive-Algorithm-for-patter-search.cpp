/*
 * Given a text txt[0..n-1] and a pattern pat[0..m-1],
 * Write a function search(char pat[], char txt[]) that prints 
 * all occurrences of pat[] in txt[]. You may assume that n > m. 
 *
 * https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/
 * https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/
 * */ 

#include <bits/stdc++.h>
using namespace std;

void NaiveSearch(string pat, string text) {
	int n = text.length();
	int m = pat.length();

	// We need only to loop till n -m becasue after that 
	// any length of array left will be less then pat length
	// so pattern can't be there.
	for(int i = 0; i <= n - m ; i++) {
		int j ;
		// starting from i to every j index
		// comparing the pattern and text
		for(j = 0; j < m; j++) {
			if(text[i + j] != pat[j])
				break;
		}
		// if in above loop j == m means string match
		// hence found
		if(j == m) 
			cout << "Found pattern\n";
	}
}

int main(void) {
	string text = "ABABDABACDABABCABAB";
	string pat = "ABABCABAB";

	NaiveSearch(pat,text);
	//KMPsearch(pat,text);
	return 0;
}
