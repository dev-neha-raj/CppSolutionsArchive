#include <iostream>
using namespace std;
int isPalindrome(int n){
	int y=0;
	while( n!=0){
		int x=n%10;   
		y=y*10+x;
		n=n/10;                                                      
	}
	return y;
	
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int y=isPalindrome(n);
	if(n==y){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"Not a palindrome"<<endl;
	}

}
