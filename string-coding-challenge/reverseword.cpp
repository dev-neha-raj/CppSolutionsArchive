#include <bits/stdc++.h>
using namespace std;
string reverse(string s){
string result;
int i=0;
int n=s.length();

while(i<n){
    while(i<n && s[i]==' ')i++;
    if(i>n) break;
    int j=i+1;
    while(j<n && s[j] !=' ')j++;
    string sub = s.substr(i,j-i);
    if(result.length()==0) result=sub;
    else result=sub+" "+result;
    i=j+1;
}
return result;
}
int main()
{ 
    string str;
cout<<"Enter the string :";
getline(cin,str);
cout<<"The reversed string is: ";
cout<< reverse(str);
    return 0;
}

/*
reverse the word in the string...
input- this is string
output- string is this
last in first out!



*/