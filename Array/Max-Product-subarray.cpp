#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/*
 * Time Complexity: O(n*2)
 * Only works if elements are positive
 * */

/*
ll maxProduct(vector<int>& arr,int n) {
    int result = arr[0];

    for(int i = 0; i < n ; i++) {
        int tmp = arr[i];
        for(int j = i + 1; j < n; j++) {

            result = max(tmp,result);
            tmp *= arr[j];
        }
        result = max(tmp,result);
    }
    return result;
}
*/

/*
 * Time Complexity O(n)
 *
 * In this problem we have -ve and +ve so this won't be solved in normal ways i.e find max only
 * 
 * We create to varibale max and min to store max and min of product
 * 								 |___ In case of -ve values the -ve product will come here
 * 
 * We Iterate through array from index 1 as the 0 index values is already stored
 * 
 *                  |--- In case iteration is part of an subarray
 * max(arr[i], max*arr[i])
 *         |___ In case staring of subarray [eg i = 3 subarray start from index 3]
 * 
 * If in case to encounter any negative value swap max and min
 * because say arr[i] = -3
 *      max * arr[i] say is -60 this makes it lesser value
 *      but min * arr[i] say is [-30 * -3] becomes 90 which is greater 
 * Hence swap them
 * 
 * then the Maximum value among the max [variable] is the ans
 * */

ll maxProduct(vector<int>& arr,int n) {
	
	ll ans = arr[0];
	ll max_product = arr[0];
	ll min_product = arr[0];

    
	for(int i = 1; i < n; ++i) {

		if(arr[i] < 0) {
			swap(max_product,min_product);
		}

		max_product = max((ll)arr[i],(ll)max_product * arr[i]);
		min_product = min((ll)arr[i],(ll)min_product * arr[i]);
		ans = max(ans,max_product);
	}
	return ans;
}

/*
long long maxProduct(vector<int> arr, int n) {
  long long res=INT_MIN;long long ma=1,mn=1; long long arr1[n];
    
    for(int i=0;i<n;i++)
      arr1[i]=arr[i];
       
    for(int i=0;i<n;i++){
        if(arr1[i]<0) swap(ma,mn);
        ma=max(arr1[i],ma*arr1[i]);
        mn=min(arr1[i],mn*arr1[i]);
        res = max(res,ma);
    }
    return res;
}
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // vector<int> arr = {6,-3,-10,0,2};
    vector<int> arr ={3, 12, 15, 23, 33, -35, 30, -40, -30, -30, -30, 26, 28};
    int n = arr.size();
    cout << maxProduct(arr,n) << endl;
    return 0;
}
