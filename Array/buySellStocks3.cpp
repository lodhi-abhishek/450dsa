#include <bits/stdc++.h>
using namespace std;

/*
https://youtu.be/2FROyvnnrrM?t=748 

Watch this video for more explainations

allowed maximum 2 transaction

prices [2,3,4,2,1,2,3,2,4]
	  max 		  max
4|	  /\     max  /
3|	 /  \	 /\  /
2|	/	 \	/  \/
1|	min	  \/   min
 |__________________

 DP Recurvise Formula

 for kth transcation on the ith day.

 dp[k, i] = max(dp[k, i-1], prices[i] - prices[j] + dp[k-1, j-1]), j=[0..i-1]
				  |							|
				  |  						|
	if you don't sell on that days	if buy on i day then prices[i] - prices[j] profit
	porfit for that day  remain 	j -> day stock purchased + profit from the 
	same as pervious days.			previous transcation.

*/

// time complexity: O(kn^2) space complexity: O(kn)
int maxProfit(vector<int> prices) {

	if(prices.size() == 0) return 0;
	vector<vector <int>> dp (3,vector<int>(prices.size(),0));

		/*
			for(auto i: dp) {
				for(auto j: i) {
					cout << j << " ";
				}
				cout << "\n";
			}
		*/

	for(int k = 1;k<=2;k++) {
		for(int i = 0; i<(int)prices.size();i++) {
			int min_ = prices[0];

			for(int j = 1; j < i; j++) {
				min_ = min(min_,prices[j] - dp[k-1][j-1]);
			}
			dp[k][i] = max(dp[k][i-1],prices[i]-min_);
		}
	}
	return dp[2][(int)prices.size()-1];
}

// O(kn): Time Complexity
// O(kn): Space Complexity
int maxProfitOptimize(vector<int> prices) {

	if (prices.size() == 0) return 0;
    vector<vector<int>> dp (3,vector<int>(prices.size(),0));

    for (int k = 1; k <= 2; k++) {

    	int min_value = prices[0];
    
    	for (int i = 1; i <(int)prices.size(); i++) {

    		min_value = min(min_value, prices[i] - dp[k-1][i-1]);
    		
    		dp[k][i] = max(dp[k][i-1], prices[i] - min_value);
    	}
    }
    return dp[2][prices.size() - 1];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> prices = {3,3,5,0,0,3,1,4};
//	cout << maxProfit(prices) << "\n";
	cout << maxProfitOptimize(prices) << "\n";
	return 0;
}
