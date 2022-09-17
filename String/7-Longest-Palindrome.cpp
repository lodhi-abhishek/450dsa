#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

// Navie
int longestPalin_Naive(string str);

// Optimize
// File 647-Palindrome Substrings
/*
string longestPalin_Opt(string s) {
    int n = s.length(),len,startindex;
    string result;
    vector<vector<bool> > dp(n,vector<bool>(n,false));

    for(int g = 0 ; g < n; g++) {
        for(int i = 0,j = g;j < n; i++, j++) {
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
                if(s[i] == s[j] && dp[i+1][j-1] == true)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }

            if(dp[i][j]) {
                // len = g + 1;
                // startindex = i;

                result = s.substr(i,j - i + 1);
            }
        }
    }
    // cout << len << "--\n";
    // int i = startindex;
    // while(len--) {
    //     result += s[i];
    //     i++;
    // }
    return result;
}
*/
string longestPalin_Opt(string str) {
        int n = str.length();
        int startpoint = 0;
        int string_length_toget = 0;
        bool dp[n][n];
        for(int gap = 0; gap < n; gap++){
            for(int i = 0, j = i + gap; j < n; i++, j++){
                dp[i][j] = false;
                if(gap == 0){
                    dp[i][j] = true;
                    if(gap + 1 > string_length_toget){
                        string_length_toget = gap + 1;
                        startpoint = i;
                    }
                }
                else if(gap == 1){
                    if(str[i] == str[j]){
                        dp[i][j] = true;
                        if(string_length_toget < 2){
                            string_length_toget = 2;
                            startpoint = i;
                        }
                    }
                }
                else{
                    if(str[i] == str[j] && dp[i + 1][j - 1] == true){
                        dp[i][j] = true;
                        if(string_length_toget < gap + 1){
                            string_length_toget = gap + 1;
                            startpoint = i;
                        }
                    }
                }
            }
        }
        string curr = "";
        for(int i = startpoint ; i < startpoint + string_length_toget; i++){
            curr += str[i];
        }
        return curr;
}

int main(void) {
    // string str = "aaaabbaa";
    string str = "rfkqyuqfjkxy";
    cout << longestPalin_Naive(str) << endl;
    cout << longestPalin_Opt(str); 

    return 0;
}

int longestPalin_Naive(string str) {
    int n = str.length();

    int max_length = 1, start = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j< n;j++) {
            bool flag = true;
            // for(int k = 0; k < (j - i + 1)/2; k++) 
            //     if(str[i + k] != str[j -k])
            //         flag = false;
            
            int k = 0;
            while(k <(j - i + 1)/2) {
                if(str[i + k] != str[j - k])
                    flag = false;
                
                k++;
            }

            if(flag && (j - i + 1) > max_length) {
                max_length = (j - i + 1);
                start = i;
            }
        }
    }
    return max_length;
}


