#include <bits/stdc++.h>
using namespace std;
char maxOccurChar(string s){
    char ans; int maxfreq=0;
    int count[256]={0};// this is a declaration of the count array of 256 size which will
    //initialise each character with 0
    for(int i=0;i<s.length();i++){
        count[s[i]]++;//t=0 to 1  a=0 to 1  k e y o u f o r w a r d
        if(count[s[i]]>maxfreq){
            maxfreq=count[s[i]];
            ans=s[i];
        }
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




/*
maximum occuring character in the string..
take you forward
a is the maximum character.
how to print it?
i guess by storing the frequency of the character.
freq[str[i]]++


*/