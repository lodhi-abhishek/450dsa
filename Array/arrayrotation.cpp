/*  
 *  Juggling Algorithm
 *  We divide the array into the sets and move the elements inside
 *  Here d = 3, n = 7 the number of set is gcd(n,d)
 *
 * 		1  2  3  4  5  6  7  8  9  --> 4  5  6  7  8  9  1  2  3 
 *
 * 		0  1  2  3  4  5  6  7  8  [Index]
 *
 * 		i is in range[0 -> gcd(d,n)]
 *
 * 		first move i = 0 
 * 		set 0:  3 6 0 [index]
 *
 * 		 -->  tmp --------
 *		|				  |
 * 		1  2  3  4  5  6  7  8  9
 * 		|        |        |
 * 		 --<----- ----<---
 *
 * 		 i = 1
 * 		 set 1: 4 7 1 [index] 
 *
 *			 -> tmp ----------
 *			|				  |
 * 		 4  2  3  7  5  6  1  8  9
 * 		 	|        |        |
 * 		 	 ----<--- ---<----
 *
 * 		 4  5  3  7  8  6  1  2  9
 *
 * 		 i = 2
 * 		 set 2: 5  8  2 [index]
 *
 * 		 		------>tmp ------
 *			   |				 |
 * 		 4  5  3  7  8  6  1  2  9
 * 		 	   |		|		 |
 * 		 	    ----<--- ----<---
 *
 * 		 4  5  6  7  8  9  1  2  3
 * */

#include <iostream>
#define endl "\n"
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b) { return b?gcd(b,a%b):a; }

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = 9, d = 3, tmp , j, k;
	int outer = gcd(n,d);

	for(int i=0;i<outer;++i) {
		j = i;
		tmp = arr[i];

		while(1) { // Inner Loop 
			k = (j + d) % n;
			if(k == i) break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = tmp;
	}

	for(int i=0;i<n;++i) cout << arr[i] << " ";
		cout << endl;
	return 0;
}