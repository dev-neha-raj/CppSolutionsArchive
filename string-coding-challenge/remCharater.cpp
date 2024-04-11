//remove character except alphabet.
#include <bits/stdc++.h>
using namespace std; 
string remChar(string s){
  string ans;
    for(int i=0;i<s.length();i++){
    int ascii=(int)s[i];  
    if((ascii>=65 && ascii<=90)|| (ascii>=97 && ascii<=122))
    ans.push_back(s[i]);}
    return ans;
}
int main()
{ 
    string str=" take12$for*war&d#you";
    cout<<"Resultant string is:";
    cout<<remChar(str);
    return 0;
}
