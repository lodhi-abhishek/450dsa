#include <iostream>
#include <string>
using namespace std;

int maxSubstr(string s) {
    int n = s.length();

    int count0 = 0, count1 = 0;

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0')
            count0++;
        
        if(s[i] == '1')
            count1++;

       // check for string that can be formed
       // 0100 till this 01 cane be formed so add 1 to ans
       // 01001 till this two 01 0011 can be form add 1
        if(count0 == count1)
            ans++;
    }

    // If only not equal till end means not satisfied
    if(count0 != count1)
        return -1;
    return ans;
}

int main(void) {
    string s = "0100110101";

    cout << maxSubstr(s) << "\n";
    return 0;
}