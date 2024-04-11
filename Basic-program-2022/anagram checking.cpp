//to check if two strings are anagram of each other..
#include<iostream>
#include<algorithm>
using namespace std;
bool chkAnagram(string str1, string str2){
	if(str1.length() != str2.length())
	return false;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	for(int i=0;i<str1.length();i++){
		if(str1[i] != str2[i])
		return false;}
		return true;
	}
int main(){
	string str1="INTEGER";
	string str2="TEGERN";
	if (chkAnagram(str1,str2))
	cout<<"TRUE"<<endl;
	else
	cout<<"FALSE"<<endl;
	return 0;
}

