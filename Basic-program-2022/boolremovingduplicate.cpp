//using boolean array...
#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
	string ans=" ";
	vector <bool> map(26,false);{
	for (int i=0;i<s.length();i++){
		if(map[s[i]-'a']==false){
			ans +=s[i];
			map[s[i]-'a']=true;
		}
	}
	return ans;
	}
}
int main(){
	string str="cbacdcbc";
	cout<<"Original string: "<<str<<endl;
	cout<<"After removing duplicates: "<<removeDuplicate(str)<<endl;
	return 0;}
	
	
	








