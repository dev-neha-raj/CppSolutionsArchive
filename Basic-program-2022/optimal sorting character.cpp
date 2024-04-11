//better approach to sort the character of the string...
#include<bits/stdc++.h>
using namespace std;
string character(string str){
	sort(str.begin(),str.end());
	return str;
}

int main(){
	string str="zxcbg";
	int length=str.length();
	cout<<"String after sorting: "<<"\n";
	cout<<character(str)<<"\n";
	return 0;
	
	}



