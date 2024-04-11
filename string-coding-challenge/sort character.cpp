#include <bits/stdc++.h>
using namespace std;

string sortChar(string s){
for(int i=0;i<s.length();i++){
for(int j=0;j<s.length()-i-1;j++){
    if(s[j]>s[j+1]){
        char temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
    }
}
}
return s;
}


int main()
{ 
    string str;
cout<<"Enter the string :";
getline(cin,str);
cout<<sortChar(str);
    return 0;
}

/*
input - 'xybgm'
output - 'bgmxy'
will use nested for loop 
x -->

*/