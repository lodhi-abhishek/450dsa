#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/* Approach

    1.Create a ordered map to store elements in the sequences for frequency

    2.Make each array into a set.So the repeated elements are eliminated

    3.Use map to count the frequency of the elements, in each array.

    check which element has frequency 3 that is our common element

*/
vector<int> commonElements(int A[],int B[],int C[], int n1, int n2, int n3) {

    map<int,int> m;

    set<int> A_S (A,A+n1);
    set<int> B_S (B,B+n2);
    set<int> C_S (C,C+n3);

    for(auto i: A_S)
        m[(int)i]++;

    for(auto i: B_S)
        m[(int)i]++;

    for(auto i: C_S)
        m[(int)i]++;


    vector<int> arr;
    for(auto i: m) {
        if(i.second == 3) 
            arr.push_back(i.first);
    }
    return arr;
}

int main(void) {
    // int A[] =  {1, 5, 10, 20, 40, 80};
    // int B[] = {6, 7, 20, 80, 100};
    // int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    // int n1 = 6, n2 = 5, n3 = 8;

    int n1 = 15 , n2 = 88, n3 = 48;
    int A[] = {-69 ,-68, -39, -25, -6, 18, 33, 39, 42, 46, 52, 55, 55, 64, 71};
    int B[] = {-97, -92 ,-90, -90, -87, -85, -82, -77 ,-77, -77, -75, -71, -67 ,-64, -60, -59, -58, -52, -49, -48 ,-48, -47, -47, -46, -41, -36, -35, -29, -28, -26, -25, -20, -19 ,-14, -13 ,-13, -11 ,-10, -6 ,-4, 2, 3, 9, 12, 15, 17, 20, 22, 23, 24, 27, 29, 36, 36, 37, 38, 39, 42, 45, 47, 48, 48, 50, 52, 52, 53, 57, 59, 60, 63, 63, 64, 64, 65, 68, 70, 71, 76, 76, 77, 83, 83, 84, 85, 86, 89, 97, 97};
    int C[] = {-95, -95, -86 ,-83 ,-70, -67, -57, -53, -52, -35, -33 ,-32, -30, -20, -16 ,-15, -15, -11 ,-10, -10, -4, 0, 4, 15, 18, 34, 36, 37, 39, 41, 43 ,43, 48, 49, 50, 51, 58, 63, 64, 67, 69, 77 ,79 ,84 ,84 ,94 ,95 ,97};
    vector<int> arr = commonElements(A,B,C,n1,n2,n3);

    for(int i: arr)
        cout << i << " ";
    cout << endl;
    return 0;
}