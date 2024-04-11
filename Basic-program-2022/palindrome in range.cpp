//to find the palindrome number between the given range...
#include <bits/stdc++.h>
using namespace std;
bool chkPalindrome(int num){
int reverse=0;
int digit=num;
while(digit>0){ 
reverse=reverse*10+digit%10;
digit=digit/10;
}
if(num==reverse)
return true;
else
return false;
}
void printPalindrome(int x,int y){
	for(int i=x;i<=y;i++){
		if(chkPalindrome(i)){
			cout<<i<<" ";
		}
	}	
}
int main(){
	int r1,r2;
	cout<<"Enter the upper range: "<<" ";
	cin>>r1;
	cout<<"Enter the lower range: "<<" ";
	cin>>r2;
	cout<<"The palindrome number between the given range is:"<<" ";
	printPalindrome(r1,r2);
	return 0;
}





