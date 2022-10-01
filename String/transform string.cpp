/*
 * Minimum operation requited to make a string 1 to string 2
 * Below is complete algorithm. 
 *  - Find if A can be transformed to B or not by first creating a count array 
 *     for all characters of A, then checking with B if B has same count for every character. 
 *  - Initialize result as 0. 
 *  - Start traversing from end of both strings. 
 *  	- If current characters of A and B match, i.e., A[i] == B[j] 
 *  	- then do i = i-1 and j = j-1 
 *  - If current characters don’t match, then search B[j] in remaining A.
 *    While searching, keep incrementing result as these characters
 *    must be moved ahead for A to B transformation.
 * */

#include <bits/stdc++.h>
using namespace std;

int min_operation(string &A, string &B) {
    int m = A.length() , n = B.length();

    if(n != m)
        return -1;
    
    int count[258] = {}, result = 0;

    for(int i = 0; i< n; i++) count[A[i]]++;
    for(int i = 0; i< n; i++) count[B[i]]--;

    // In case if count[i] is not 0 means not same character in 
    // String A and B.

    for(int i = 0; i < 258; i++) {
        if(count[i])
            return -1;
    }
    // Till this stage both strings are of same length and have 
    // same characters in equal numbers

    for(int i = m - 1, j = n - 1 ; i>=0;) {
        while(i >= 0 && A[i] != B[j]) {
            result++;
            i--;
        }

        if(i >= 0) {
            i--;
            j--;
        }
    }
    return result;
}

int main(void) {
    // string A = "EABCD";
    // string B = "AEBCD";

    string A = "abd";
    string B = "bad";
    cout << "Count : " << min_operation(A,B) << "\n";
    return 0;
}
