#include <bits/stdc++.h>
using namespace std;
string remBracket(string str) {
    string s;
    for (int i = 0; i < str.size(); i++) {
        if ((str[i] != '(' && str[i] != ')') && (str[i] != '{' && str[i] != '}') && (str[i] != '[' && str[i] != ']')) {
            s.push_back(str[i]);
        }
    }
    return s;
}

int main()
{    
string str;
cout<<"Enter the string :";
getline(cin,str);
cout<<remBracket(str);
    return 0;
}

// (a+b)*[c+d]