#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

/*
Iterate over the entire string

Iterate from the end of the strng
add substring to the list

drop kth element from the string to get different string

if seque. is not in the list then recurr.
*/

unordered_set<string> st;

void subsequences(string str) {

    for(int i = 0; i < str.length() ; i++) {

        for(int j = str.length(); j > i ; j--) {
            string sub_str = str.substr(i,j); // substr(index,length)
            st.insert(sub_str);

            for(int k = 1; k < sub_str.length(); k++) {
                string sub = sub_str;

                sub.erase(sub.begin()+k); // Remove kth element from the string
                subsequences(sub);
            }
        }
    }
}


int main(void) {
    string s = "aabc";

    subsequences(s);

    for(auto i: st) 
        cout << i << "\n";
    return 0;
}