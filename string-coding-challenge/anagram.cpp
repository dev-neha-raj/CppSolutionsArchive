#include <bits/stdc++.h>
using namespace std;
bool chkAnagram(string str1, string str2){
if(str1.length() != str2.length())
return false;
sort(str1.begin(), str1.end());
sort(str2.begin(), str2.end());
for(int i=0;i<str1.length();i++){
    if(str1[i] !=str2[i])
    return false;}
    return true;
}

int main()
{ 
string str1, str2;
cout<<"Enter the string1:";
getline(cin,str1);
cout<<endl;
cout<<"Enter the string 2:";
getline(cin,str2);
bool chk=chkAnagram(str1, str2);
if(chk==true){
    cout<<"Given strings are anagram to each other";
}
else{
    cout<<"Given strings are not anagram to each other";
}
    return 0;
}






/*
act and cat-same set of characters with different word and meaning.
smile and miles
listen - silent
cinema - iceman
dessert - stressed
school - coolsh
race - care
earth - heart
act - cat
evil - live
debit - bidet
tired - tried


s i l e n t ----> l i s t e n----> t i l e n s 
mtlb ek word dusra meaningful words me kaise change hoga?
hey i didn't had to change i just had to check if the words are same or not.

*/