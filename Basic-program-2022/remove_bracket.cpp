//Removing brackets from algebric expression!,
#include<bits/stdc++.h>
using namespace std;
 string removeBracket(string str){
 	string ans;
 	for(int i=0;i<str.size();i++){
 		if(str[i] != '(' && str[i] != ')')
 		ans.push_back(str[i]);
 		//push_back-insert new element at the end of the vector..
	 }
	 return ans;
 }
 int main(){
 	string str1="a+((b+c)+d)";
 	string str2="((a-b)+c)";
cout<<"Original String: "<<str1<<endl;
cout<<"After removing brackets: "<<removeBracket(str1)<<endl;
cout<<"Original string: "<<str2<<endl;
cout<<"After removing brackets: "<<removeBracket(str2)<<endl;
 }
