#include <bits/stdc++.h>
using namespace std;

int countsquare(int n) {
        int count = 0;
        
        for(int i = 1; i< sqrt(n); i++) {
            if( i * i < n )
                ++count;
        }
    return count;
}
