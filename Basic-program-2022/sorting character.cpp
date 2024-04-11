// to sort the characters in the string...
#include<bits/stdc++.h>
using namespace std;
string character(string str, int n){
	//bubble sort..
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(str[j]>str[j+1]){
				char temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	return str;
}
int main(){
	string str="zxcbg";
	int length=str.length();
	cout<<"String after sorting: "<<"\n";
	cout<<character(str,length)<<"\n";
	return 0;
}






