#include <bits/stdc++.h>
using namespace std;
int count(string s){
int vowel=0;int consonant=0;int spaces=0;

for(int i=0;i<s.length();i++){
s[i]=tolower(s[i]);
}
for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u')
    vowel++;
}

for(int i=0;i<s.length();i++){
    if(s[i]>='a'&& s[i]<='z')
   consonant++;
}

for(int i=0;i<s.length();i++){
    if(s[i]==' ')
    spaces++;
}
cout<<"No. of vowel in the given string are:"<<vowel<<endl;
cout<<"No. of consonant in the given string are:"<<consonant<<endl;
cout<<"No. of spaces in the given string are:"<<spaces<<endl;
}
int main()
{ 
    string str;
cout<<"Enter the string:";
getline(cin, str);
count(str);
    return 0;
}