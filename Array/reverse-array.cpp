#include <iostream>
#define endl "\n"
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n , arr[1000]; 
    cin >> t;

    while(t--) {
        cin >> n;
        for(int i = 0;i < n; i++) 
            cin >> arr[i];

        for(int i = n-1;i >= 0; i--) 
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
