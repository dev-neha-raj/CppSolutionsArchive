//practicing string...
//To check if number is palindrome or not..
//palindrome: abcdcba
#include <iostream>
using namespace std;
bool isPalindrome(string str){
	for(int i=0; i<str.length()/2; i++){
		if (str[i] != str[str.length()-i-1]){
			return false;}}
			return true;
		} 
int main(){
string str="abcdcba"; 
bool ans=isPalindrome(str);
if(ans== true){
	cout<<"Palindrome";}
	else{
		cout<<"Not palindrome";}
		return 0;
	}

