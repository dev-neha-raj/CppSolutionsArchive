//remove all duplicate from input string...
#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string x){
	string ans=" ";
	for(int i=0;i<x.length();i++){
		int j=0;
		for(j=0;j<i;j++){
			if(x[i]==x[j]){
				break;
			}
		}
		if(i==j){ 
			ans +=x[i];
		}
	}
 return ans;	
}
int main(){
	string str="cbacdcbc";
	cout<<"Original string:"<<str<<endl;
	cout<<"After removing duplicates: "<<removeDuplicate(str)<<endl;
	return 0;
}
