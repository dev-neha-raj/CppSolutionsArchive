//reverse words in the string...
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="whatever";
	cout<<"Before reversing the words: "<<endl;
	cout<<s<<endl;
	s +=" ";
	stack<string> st;
	int i;
	string str=" ";
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			st.push(str);
			str=" ";}
			else str +=s[i];}
			string ans=" ";
			while(st.size()!=1){
				ans +=st.top()+" ";
				st.pop();}
				string ans=' ';
				while(st.size()!=1){
					ans +=st.top();
				}
				ans +=st.top();
				cout<<"After reversing words: "<<endl;
				cout<<ans;
				return 0;
			}
	
