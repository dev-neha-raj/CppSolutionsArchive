#include <bits/stdc++.h>
using namespace std;

int sub(string s, string s1) {
    int n = s.length();
    int m = s1.length();
    int i = 0; // initialize i to 0
    while (i < n) {
        int temp = i;
        int j = 0;
        while (j < m) {
            if (s[temp] != s1[j]) {
                break;
            }
            temp++;
            j++;
        }
        if (j == m) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() { 
    string s = "takeour foreward";
    string s1 = "foreward";
    int foundIdx = sub(s, s1);
    cout << "The substring is: " << foundIdx << endl;
    return 0;
}
