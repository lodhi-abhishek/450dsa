#include <iostream>
#include <vector>
using namespace std;

#define endl "\n"

/* Algorithm that is Used
 * 1. k – starting row index;
 *    m – ending row index; 
 *    l – starting column index;
 *    n – ending column index
 *
 * 2. Run to print all element 
 * 
 * 3. Outer loop traversal print elements of square in clockwise.
 * 
 * 4. Print the top row,
 *      Print the elements of the kth row from column index l to n, and increase the count of k.
 *
 * 5. Print the right column,
 *      Print the last column or n-1th column from row index k to m and decrease the count of n.
 *
 * 6. Print the bottom row, 
 *      if k < m, then print the elements of m-1th row from column n-1 to l and decrease the count of m
 *
 * 7. Print the left column,
 *      if l < n, then print the elements of lth column from m-1th row to k and increase the count of l. 
 *
 *      0 0 0 0
 *      0 0 0 0
 *      0 0 0 0
 *      0 0 0 0
 *
 * */

vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) {
    int i , k = 0 , l = 0 ;
    vector<int> ans;
    /*
	 * k = starting row index
	 * m = ending row index [ r in this case ]
	 * l = starting column index 
	 * n = ending colum index [ c in this case ] 
	 * */
    int m = r, n = c;
    
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i) {
            ans.push_back(a[k][i]);
        }
        k++;
  
        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            ans.push_back(a[i][n-1]);
        }
        n--;
  
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                ans.push_back(a[m - 1][i]);
            }
            m--;
        }
  
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                ans.push_back(a[i][l]);
            }
            l++;
        }
    }
    return ans;
}

int main(void) {

    vector<vector<int>> matrix = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15,16}};
    int r = 4, c = 4;

    vector<int> ans = spirallyTraverse(matrix,r,c);
    for(int i: ans)
        cout << i << " ";
    return 0;
}
