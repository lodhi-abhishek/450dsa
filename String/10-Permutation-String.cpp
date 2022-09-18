#include <bits/stdc++.h>
using namespace std;

//https://mathworld.wolfram.com/Permutation.html
// See image newPerumation.gif to understand

void permutation(string str,int first,int last) {
    if(first == last) {
        cout << str << "\n";
    } 
    else {

        for(int i = first; i <=last; i++) {
            swap(str[i],str[first]);
            permutation(str,i+1,last);
            swap(str[i],str[first]);
        }
    }

}

int main(void) {
    string str = "ABC";
    int n = str.length();

    permutation(str,0,n);
    return 0;
}