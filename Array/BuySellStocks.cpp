#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

/* Approach
    First thinking: find the max , min element subtract and get max profit. 
    BUT THERE IS A CATCH

    eg. [3,4,1,6] 6  - 1 = 5 
    but [7,6,4,3,1]
        7 - 1 = 6 

        means you buy min at position 5 [1] but sold it at day 1 [7]

    Run two pointer left and right to check above situation
    left is buy and right is sell

    if right value is greater then only add to profit and find max profit 
    by moving right ahead

    if you find a situation where left value is greater then right value
    change the left index to the right 
*/

int maxProfit(vector<int>& prices, int n) {

    int left = 0; // Buy 
    int right = 1; // Sell

    int curr_profit = 0, max_profit = 0;

    while(right < n) {
        if(prices[right] > prices[left]) {
            curr_profit = prices[right] - prices[left];
            max_profit = max(curr_profit,max_profit);
        }

        else {
            left = right;
        }
        ++right;
    }
    return max_profit;
}

int main(void) {
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();

    cout << maxProfit(prices,n) << endl;
    return 0;
}