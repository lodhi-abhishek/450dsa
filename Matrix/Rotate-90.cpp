#include <iostream>
#define N 4 

using namespace std;
/* 3 X 3
index
    00 01 02     20 10 00
    10 11 12 --->21 11 01
    20 21 22     22 12 02

4X4
    00 01 02 03     30 20 10 00
    10 11 12 13     31 21 11 01
    20 21 22 23 --->32 22 12 02
    30 31 32 33     33 23 13 03
*/

void rotate90clockwise(int arr[N][N]) {

    for(int j = 0; j < N; j++) {

        for(int i = N - 1 ; i >=0 ; i--) {
            cout << arr[i][j] <<  " ";
        }
        cout << "\n";
    }
}

int main(void) {
    int arr[N][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate90clockwise(arr);
    return 0;
}