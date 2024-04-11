#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    string str1 ,str2;
cout<<"Enter the string1 :";
getline(cin,str1);
cout<<endl;
cout<<"Enter the string2 :";
getline(cin,str2);
strcat(str1,str2);
// str1=str1+" "+str2;
cout<<endl;
cout<<str1 ;

    return 0;
}