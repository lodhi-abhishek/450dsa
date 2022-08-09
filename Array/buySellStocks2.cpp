#include <iostream>
using namespace std; 
/*
	We don't have restriction on the number of transactions
	https://www.youtube.com/watch?v=2FROyvnnrrM

	Watch this videos For charity
	|
	|		max 		  /\
	|		 /\			 /	\
	|	max	/  \		/
	|  /\  /	\/\    /
	| /  \/		   \  /
	|/	 mi			\/ min
	|_________________________

	 ---  ----  --	 --------
	 P1   P2	P3		P4   <- Sub Profit
	P -> Profit

	Total Profit = Σ Sub Profit
	
	Unlike in BuySellStocks1 where we had to find max profit selling 1 stock
	here we can buy [ as many stocks ] but after selling previous one
*/


int maxProfit(vector<int> prices) {
	int n = prices.size() , ans = 0;

	for(int i = 1; i < n; i++) {
		if(arr[i] > arr[i-1]) {
			ans += arr[i] - arr[i-1];
		}
	}

	return ans;
}

int main() {
	vector<int> arr = {7,1,5,3,6,4};
	cout << maxProfit(arr) << endl;
	return 0;
}