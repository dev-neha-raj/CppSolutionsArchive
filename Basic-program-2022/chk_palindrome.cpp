#include<iostream>
using namespace std;
int chkPalindrome(int n){
int temp=n;int reverse=0;
while(temp>0){
reverse= reverse*10+temp%10;
temp=temp/10;	
}
} 
int main(){
	int n=121;
int temp=121,reverse;
if(temp==reverse){
	cout<<"It is a palindrome number"<<endl;}
	else{
		cout<<"It is not a palindrome number"<<endl;
	}
}	

