#include <bits/stdc++.h>
using namespace std;

string lexicographic(string s){
    // how to add integer to the string.
    for(int i=0;i<s.length();i++){
    int ascii= (int)(s[i]);
    if(ascii==90)
    s[i]=char(65);
    else if(ascii==122)
    s[i]=char(97);
   else if((ascii>=65 && ascii <90) ||(ascii>=97 && ascii<122)) {
        s[i]=char(ascii+1);
    }
    }
    return s;
}
   
int main()
{ 
    string str;
cout<<"Enter the string :";
getline(cin,str);
cout<<lexicographic(str);
    return 0;
}

/*
string="abcdxyz"
string ="bcdeyza"
a to z ke beech me words ya phir A to Z. and conditions if the user put 
other than this value..
65 to 90- A to Z.
97 to 122-a to z.
how to integer to the string?



*/