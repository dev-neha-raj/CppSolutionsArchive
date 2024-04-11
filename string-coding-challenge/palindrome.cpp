#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool isPalindrome(string s){
for(int i=0;i<=s.length()/2;i++){// len=6, 3, i=0,1,2,
    if(s[i] !=s[s.length()-i-1]){//6-0-1=5
        return false;}}
        return true;
    }

int main()
{ 
string str;
cout<<"Enter the string :";
getline(cin,str);
bool ans= isPalindrome(str);
if(ans==true){
    cout<<"Given string is palindrome";
}
else{
    cout<<"Not palindrome";
}
return 0;
}




















/*
check if the given string is palindrome or not,
ABCDCBA.









*/