#include <bits/stdc++.h>
using namespace std;
string Case(string s){
    for(int i=0;i<s.length();i++){
        int ascii=(int)(s[i]);
        if(ascii>=65 && ascii<=90)
        s[i]=towlower(s[i]);

        if(ascii>=97 && ascii<=122)
        s[i]=towupper(s[i]);
    }
    cout<<"Resultant string: "<<s<<"\n";
}
int main()
{ 
    string str;
cout<<"Enter the string :";
getline(cin,str);
Case(str);
    return 0;
}

/*
input - jaVA
output-JAva

changing the case of the character 
bada hai toh chota hoga chota hai to bada hoga.


*/