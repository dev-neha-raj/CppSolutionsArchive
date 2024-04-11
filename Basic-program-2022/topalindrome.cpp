//temp=323;
#include <iostream>
using namespace std;
int isPalindrome(int n){
	int reverse=0; int temp=n;
	while(temp>0){
		reverse=reverse*10+temp%10;
		temp=temp/10;
	}
}
int main(){
	int temp=121;int reverse=0;
	if(temp==reverse){
		cout<<"yes, it is a palindrome number";
	}
	else{
	   	cout<<"No, it is not a palindrome number ";
	}
}

