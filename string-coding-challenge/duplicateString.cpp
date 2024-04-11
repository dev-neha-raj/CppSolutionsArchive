#include <bits/stdc++.h>
using namespace std;
string duplicates(string s){
    string ans="";
      for(int i=0;i<s.length();i++){//0 1 2 3 4
        int j=0;
     for(j=0;j<i;j++){ //
       if(s[i]==s[j]){
        break;
       }
     }
        if(i==j){
        ans +=s[i];
     }
     }
    return ans;
    }
    
int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    string unique_chars = duplicates(str);
    cout << "The unique characters are: " << unique_chars << endl;
    return 0;
}

/*
remove duplicates in the input string
intput-c a a b e a c c b
output-cabe
sorting
use for loop and store all the elements of the string
again apply the for loop till stored part 
if any element repeat more than once--discardit 
and print the remainig element



*/