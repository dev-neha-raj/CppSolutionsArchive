#include <bits/stdc++.h>
using namespace std;
int isPalindrome(int n){
	int rev=0;
	while(n !=0){
		int x=n%10;
	    rev= rev*10+x;
		n=n/10;
	}
	return rev;
}
int main(){
int n;
cin>>n;
int num=isPalindrome(n);
if(num==n){
	cout<<"palindrome"<<endl;
}	
else{
	cout<<"Not a palindrome"<<endl;
}
}
