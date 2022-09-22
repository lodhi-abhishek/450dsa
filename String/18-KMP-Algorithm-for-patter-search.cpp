#include <bits/stdc++.h>
using namespace std;

/*
credit: https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/
neet coder: https://youtu.be/JoF0Z7nVSrA

*/


// Longest prefix which is same as suffix but not the entire string.
// Beginning part of a patter is occuring from the last or not. 

void Longest_prefix_suffix(string patt, int m, vector<int> & lps) {
    // lps(m,0);
    int i = 1,prevLPS = 0;

    while(i < m) {
        if(patt[i] == patt[prevLPS]) {
            lps[i] = prevLPS + 1;
            prevLPS++;
            i++;
        }
        else if(prevLPS == 0) {
            lps[i] = 0;
            i++;
        }
        else
            prevLPS = lps[prevLPS - 1];
    }
}

void kmp_Search(string patt,string text) {
    int m = patt.length();
    int n = text.length();

    vector<int> lps(m,0);
    Longest_prefix_suffix(patt,m,lps);

    int i = 0; // for text
    int j = 0; // fot patt

    while((n - i) >= (m - j)) {
        if(patt[j] == text[i]) {
            j++,i++;
        }

        if(j == m) {
            cout << "Found at " << i - j << "\n";
            j = lps[j - 1];
        }
        else if( i < n && patt[j] != text[i]) {

            if(j == 0) 
                i++;
            else
                j = lps[j - 1];
        }
    }
}

int main(void) {
	string text = "ABABDABACDABABCABAB";
	string patt = "ABABCABAB";

	kmp_Search(patt,text);
	return 0;
}
