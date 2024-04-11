#include <bits/stdc++.h>
using namespace std;
string remchar(string s1, string s2){
unordered_map<char, int>mp;
string ans="";
for(int i=0;i<s2.length();i++){
    mp[s2[i]]=1;
}
for(int i=0;i<s1.length();i++){
    if(!mp[s1[i]]){
        ans.push_back(s1[i]);
    }
}
return ans;
}

int main()
{ 
    string str1, str2;
cout<<"Enter the string :";
getline(cin,str1);
cout<<endl;
cout<<"Enter the string :";
getline(cin,str2);
cout<<remchar(str1,str2);
    return 0;
}