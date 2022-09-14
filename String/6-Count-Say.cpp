#include <bits/stdc++.h>
using namespace std;

string countandsay(int n) {

    if(n == 0) return "";

    string result = "1";

    while(--n) {
        string cur = "";
        for(int i = 0; i < result.size(); i++) {
            int count = 1;

            while( (i+1 < result.size()) && (result[i] == result[i+1])) {
                count ++;
                i++;
            }

            cur += to_string(count) + result[i];
        }

        result = cur;
    }
    return result;
}

int main(void) {
    int n = 4;
    cout << countandsay(n) << "\n";
    return 0;
}