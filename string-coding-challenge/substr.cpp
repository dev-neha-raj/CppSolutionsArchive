#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    string str1;
cout<<"Enter the string1 :";
getline(cin,str1);
cout<<endl;
 string str2;
cout<<"Enter the string2 :";
getline(cin,str2);

auto foundIdx=str1.find(str2);
cout<<"The substring is: "<<foundIdx<<endl;
    return 0;
}