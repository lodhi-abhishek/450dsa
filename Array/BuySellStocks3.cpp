#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
/*

transactions  profit ->	
⭣	   2  4  8  6  7 [Stock selling-prices of the stock on ith day]
	0  0  0  0  0  0 [With zero transactions profit will be zero]
	1  0
	2  0
	   ⭡
	(As on the day-1 you only purchase)
*/

int maxProfit(vector<int> &prices) {

}

int main(void) {
	vector<int> prices = {3,3,5,0,0,3,1,4};
	cout << maxProfit(prices) << endl;
	return 0; 
}