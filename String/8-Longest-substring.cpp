// Same as Longest commong subarray
// https://www.geeksforgeeks.org/longest-common-subarray-in-the-given-two-arrays/

#include <bits/stdc++.h>
using namespace std;

int f(int i,int j ,string &s1,string &s2,vector<vector<int>>&dp) {
	   int n = s1.size() , m=s2.size();
	   if(i==n || j==m)
	       return 0;
	   
	   if(dp[i][j] != -1)
	        return dp[i][j];

	   int match = 0 , notMatch = 0;

	   if(i != j && s1[i] == s2[j]) 
	       match = 1 + f(i+1,j+1,s1,s2,dp);
	   else 
	        notMatch = max(f(i+1,j,s1,s2,dp),f(i,j+1,s1,s2,dp));

	   return dp[i][j] = max(match,notMatch);
	}
int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.size() , m=str.size();
		    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
		    return f(0,0,str,str,dp);
	}

