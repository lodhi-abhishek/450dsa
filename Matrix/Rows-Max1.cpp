#include <iostream>
#include <climits>
#include <vector>

namespace BruteForce {

    int RowWithMaxone(std::vector<std::vector<int> >& Matrix,int n, int m) {
        int index_max = -1, max = 0;
        for(int i = 0; i < n; i++) {
            int curr = 0;
            for(int j = 0; j < m; j++) {
                if(Matrix[i][j] == 1)
                    curr++;
            }            
            if(curr > max) {
                max = curr;
                index_max = i;
            }
        }

        return index_max;
    } 
}

namespace Optimize {

    int RowWithMaxone(std::vector<std::vector<int> >& Matrix,int n, int m) { 
        int j,max_row = 0;
        j = m - 1;

        for(int i = 0; i < n; i++) {

            bool flag = false; // To check rows has more 1's then previous

            while(j >= 0 && Matrix[i][j] == 1) {
                j = j -1;
                flag = true;
            }

            if(flag) {
                max_row = i;
            }

            if(max_row == 0 && Matrix[0][m-1] == 0)
                return -1;
        }
        return max_row;
    }
}



int main() {
    
    // std::vector<std::vector<int> > Matrix = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    std::vector<std::vector<int> > Matrix = {{0,0,0,0}};
    int n = Matrix.size();
    int m = Matrix[0].size();

    std::cout << Optimize::RowWithMaxone(Matrix,n,m) << std::endl;
}