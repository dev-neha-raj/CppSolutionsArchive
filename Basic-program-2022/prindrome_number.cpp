//to find the number of palindrome between given number...
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x){
	int rev=0;
	int temp=x;
	while(temp!=0){
		int n=temp%10;
		rev=rev*10+n;
		temp=temp/10;
	}
if(x==rev)
return true;
else
return false;
}
int main(){
	int n1,n2;
cout<<"Enter n1"<<endl;
cin>>n1;
cout<<"Enter n2"<<endl;
cin>>n2;
for(int i=n1;i<=n2;i++){
if(isPalindrome(i)){
	cout<<i<<" ";
}
}
return 0;
}
