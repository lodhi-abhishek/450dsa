#include <bits/stdc++.h>
using namespace std;

/*
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
				  \							\
				  \  						\
	if you don't sell on that days		if buy on i day then prices[i] - prices[j] profit
	porfit for that day  remain 		j -> day stock purchased + profit from the previous
	same as pervious days.				transcation.
	
*/
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> prices = {};
}