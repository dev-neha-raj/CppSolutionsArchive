#include <bits/stdc++.h>
using namespace std;

char maxOccurChar(string s){
    char ans; 
    int maxfreq=0; 
    int count=1; // initialize count to 1, not 0

    sort(s.begin(),s.end());
    for(int i=1;i<=s.length();i++){ // change loop range to avoid out-of-bounds access
        if(i<s.length() && s[i]==s[i-1]){ // check if current character is the same as previous
            count++;
        }
        else if(maxfreq<count){
            maxfreq=count;
            ans=s[i-1];
        }
        count = 1; // reset count for next character
    }
    return ans;
}

int main()
{ 
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    cout<<maxOccurChar(str);
    return 0;
}

