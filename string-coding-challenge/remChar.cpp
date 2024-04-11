#include <bits/stdc++.h>
using namespace std;
string remCharacter(string s1, string s2){
    string ans;
for(int i=0;i<s1.length();i++){
    int flag=0;
for(int j=0;j<s2.length();j++){
if(s1[i]==s2[j]){
flag =1;
}
}
if(flag !=1)
ans.push_back(s1[i]);
}
return ans;
}

int main()
{ 
    string str1,str2;
cout<<"Enter the string1:"<<endl;
getline(cin,str1);
cout<<"Enter the string2:"<<endl;
getline(cin,str2);
cout<<"The output is:"<<remCharacter(str1, str2);
    return 0;
}

/*
remove character present from string1 to string2
str1=abcdef
str2=cef

output=abd
here i'm writing the program just for one condition that is
when string1 is greater than string2
when string 2 is greater is not predicting the output.
when string 1= string2 is not predicting the output.
*/