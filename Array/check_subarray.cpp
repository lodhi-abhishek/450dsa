#include <iostream>
#include <map>
#include <string>

using namespace std;

// O(n*m log(n+m))
/*
string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);
    int i = 0, j = 0;
    
    while(i < n && j < m) {
        if(a1[i] == a2[j]) j++;
        i++;
    }
    
    cout << j << i << endl;
    if(j == m) 
        return "Yes";
    else
        return "No";
}

*/

// O(m+n)
// Using maps

string isSubset(int a1[],int a2[],int n,int m) {
    map<int,int> reduced_arr1;

    for(int i = 0; i < n;i++)
        reduced_arr1[a1[i]]++;

    for(int i = 0; i < m; i++) {

        if(reduced_arr1[a2[i]] > 0)
            reduced_arr1[a2[i]]--;
        else
            return "No";
    }

    return "Yes";
}

int main() {
	int n = 5, m = 2;
	int a1[] = {589,5847,595,959,258};
	int a2[] = {258,25};

	cout << isSubset(a1,a2,n,m);
	return 0;
}