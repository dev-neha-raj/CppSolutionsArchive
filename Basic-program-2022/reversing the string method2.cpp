//reversing the string...
#include<bits/stdc++.h>
using namespace std;
string result(string s){
	int left=0;
	int right=s.length()-1;
	string temp=" ";
	string ans=" ";
	while(left<=right){
		char ch=s[left];
		if(ch !=' '){
			temp +=ch;
		}
		else if(ch==' '){
			if(ans !=" ")ans=temp+" "+ans;
			else ans=temp;
			temp=" ";}
			left++;}
			if(temp !=" "){
				if(ans !=" ")ans=temp +' '+ans;
				else ans=temp;}
				return ans;}
	int main(){
		string st="I know ,, its tough";
		cout<<"Before reversing words:"<<endl;
		cout<<st<<endl;
		cout<<"After reversing the word:"<<endl;
		cout<<result(st);
		return 0; 
	}
	

