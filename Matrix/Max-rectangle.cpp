#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

class Solution {
public:
 
 int HistogramArea(vector<int>& arr,int n) {
    stack<int> s;
    s.push(-1);
    int area = arr[0];
    int i = 0;
    vector<int> left_smaller(n, -1), right_smaller(n, n);
    while(i<n){
        while(!s.empty()&&s.top()!=-1&&arr[s.top()]>arr[i]){
           right_smaller[s.top()] = i;
            s.pop();
        }

        if(i>0&&arr[i]==arr[i-1])
           left_smaller[i] = left_smaller[i-1];
        
        else
           left_smaller[i] = s.top();
         
        s.push(i);
        i++;
    }
    for(int j = 0; j<n; j++)
        area = max(area, arr[j]*(right_smaller[j]-left_smaller[j]-1));
    return area;
   }
   
    int MaxArea(int M[MAX][MAX], int n, int m) {

        vector<int> curr_row;
        for(int j = 0; j < m ; j++) {
            curr_row.push_back(M[0][j]);
        }

        int max_area = HistogramArea(curr_row,m);

        for(int i = 1 ; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(M[i][j] == 0)
                    curr_row[j] = 0;
                else 
                    curr_row[j] += M[i][j];
            }

            max_area = max(max_area,HistogramArea(curr_row,m));
        } 

        return max_area;
    }
};

int main(void) {
    int M[MAX][MAX];
    
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> M[i][j];
        }
    }

    Solution obj;
    cout << obj.MaxArea(M,n,m);
    return 0;
}