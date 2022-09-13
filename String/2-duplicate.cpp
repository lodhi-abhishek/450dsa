#include <bits/stdc++.h>
using namespace std;

void printdups(string str) {
    map<char,int> imap;

    for(int i = 0; i < str.length(); i++) {
        imap[str[i]]++;
    }

    for(auto it: imap) {
        if(it.second > 1)
            cout << it.first << " ";
    }
}

int main(void) {
    string str = "Teststring";
    printdups(str);
    return 0;
}