/*
 * Given a string s1 and a string s2, 
 * write a snippet to say whether s2 is a rotation of s1? 
 * given s1 = ABCD and s2 = CDAB, return true, 
 * given s1 = ABCD, and s2 = ACBD , return false
*/


// Algorithm 1
/*
    1. Create a temp string and store concatenation of str1 to
    str1 in temp.
                        temp = str1.str1
    2. If str2 is a substring of temp then str1 and str2 are 
    rotations of each other.

    Example:                 
            str1 = "ABACD"
            str2 = "CDABA"

 temp = str1.str1 = "ABACDABACD"
 Since str2 is a substring of temp, str1 and str2 are 
 rotations of each other.


 time complexity: O(n^2);
 * */ 

#include <bits/stdc++.h>
using namespace std;

bool arrRotations2(string str1,string str2);

bool arrRotations(string str1,string str2) {

    if(str1.length() != str2.length())
        return false;

    string temp = str1 + str1;

    return (temp.find(str2) != string::npos);
}

int main(void) {
    string str1 = "AACD", str2 = "ACDA";
    cout << arrRotations(str1,str2);
    cout << arrRotations2(str1,str2);
    return 0;
}

/*
    If the size of both the strings is not equal, then it can never be possible.
    Push the original string into a queue q1.
    Push the string to be checked inside another queue q2.
    Keep popping q2‘s and pushing it back into it till the number of such operations are less than the size of the string.
    If q2 becomes equal to q1 at any point during these operations, it is possible. Else not.
*/

bool arrRotations2(string str1,string str2) {

    if(str1.size() != str2.size())
        return false;

    queue<char> q1,q2;

    for(int i = 0; i<str1.length(); i++) {
        q1.push(str1[i]);
    }
    for(int i = 0; i<str2.length(); i++) {
        q2.push(str2[i]);
    }

    int k = str2.length();

    while(k--) {
        char ch = q1.front();
        q2.pop();
        q2.push(ch);

        if(q2 == q1)
            return true;
    }
    return false;
}