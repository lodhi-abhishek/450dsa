// https://leetcode.com/problems/palindromic-substrings/
// https://youtu.be/XmSOWnL6T_I

#include <bits/stdc++.h>
using namespace std;

/* Naive

string is "abccbc"

all substring:
    a
    ab      b          
    abc     bc      c 
    abcc    bcc     cc      c
    abccb   bccb    ccb     cb     b
    abccbc  bccbc   ccbc    cbc    bc

for n length there are n(n+1)/2 substring 

and O(n) for checking its palindrome or not
*/

//Using DP is the best solution
/*
        e
    s
      a  b  c  c  b  c
    a a
    b 0  b
    c 0  0  c
    c 0  0  0  c
    b 0  0  0  0  b  
    c 0  0  0  0  0  c

    let say at location [a][b] means string "ab"
    . check if palindrome if yess put true there else false
    
    let ssay at location [a][a] or[b][b]
    . since length is 1 it is palindrome put true there

    let say for location [b][b] == "bccb"
    . two condition 
        . firtchar and lastchar should be the same.
        . to check for middle we should check for dp[i+1][j-1]
            explaination: "cc"
            1. we have already check for cc so why do again
            2. why i + 1 and j - 1
                bccb -> bccb i is increase and j is decreased
                i  j     ij
*/

int countSubstring(string s) {
    int n = s.length();
    int count = 0;
    vector<vector<bool> > dp(n,vector<bool>(n,false));

    for(int g = 0; g < n; g++) { // gaps like a 0 aa 1 aaa 2 etc

        for(int i = 0,j = g; j < n; i++,j++) {
            if(g == 0) {
                dp[i][j] = true;
            }
            else if(g == 1) {
                if(s[i] == s[j])
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
            else {
                if(s[i] == s[j] && dp[i+1][j-1] == true) {
                    dp[i][j] = true;
                }
                else {
                    dp[i][j] = false;
                }
            }

            if(dp[i][j])
                ++count;
        }
    }
    return count;
}

int main(void) {
    string s = "abccbc";
    cout << countSubstring(s) << endl;
    return 0;
}