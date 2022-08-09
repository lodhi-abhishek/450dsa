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

 Buy the stock then sell. U can't buy before you sell

 Logic would be buy at minima and sell at maxima i.e 2 - 4 1 - 3 2 - 4
 but we can only have 2 transaction so Which paris to choocie is important.

    i-1 the day Action on ith day

 	Buy 		Sell 
 				Skip

 	No-State	Buy
 				Skip

 	Sell 		Bought
 				Skip

	case 
	buy - sell

	(2 - 4) + (1 - 3) = 4
	(2 - 4) + (2 - 4) = 4
	(2 - 4) + (1 - 4) = 5 <- Max profit
*/
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
}