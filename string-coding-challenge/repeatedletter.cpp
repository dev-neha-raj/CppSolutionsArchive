#include <bits/stdc++.h>
using namespace std;
class solution{
public:
void repeated_char(string& str){
    int n=str.length()
int max=0; int curr_word=0;
string result=" ";
while(i<n){
    int j=i+1;
    while(str[j] !=" " && j<n){
        j++;
    }
    int freq[26]={0};
    curr_word=0;
    for(int index=i; index<j; index++){
        freq[str[index]-'a']++;
    }
    for(int index=0; index<26; index++){
        if(freq[index]>1){
            curr_word++:
        }
    }
    if(curr_word >max){
        max=curr_word;
        result=" ";
    }
}
}


};
int main()
{ 
    string str;
cout<<"Enter the string :";
getline(cin,str);
    return 0;
}
