//to check if string is palindrome or not..
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
	for(int i=0;i<str.length()/2;i++){
		if(str[i] !=str[str.length()-i-1]){
		return false;	
		}	
	}
	return true;
}
int main(){
	string str= "abcdfcba";
	bool ans=isPalindrome(str);
	if(ans==true){
		cout<<"palindrome"<<endl;
	}else{
	cout<<"Not a palindrome"<<endl;	
	}
return 0;	
}
