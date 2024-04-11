#include <iostream>
using namespace std;
bool palindrome(int n){
	int num=0;
	while(n!=0){
		int digit=n%10;
		num=num*10+digit;
	    n=n/10;
	}
	if(n==num)
	return true;
	else
	return false;	
}
int main(){
	int n,i;
	int n1,n2;
	cout<<"Enter the lower range: "<<endl;
	cin>>n1;
	cout<<"Enter the outer range: "<<endl;
	cin>>n2;
	cout<<"The palindrome in the given range is:"<<endl;
	for(i=n1;i<=n2;i++){
	n=i;	
	if(palindrome(i)){
		cout<<i<<" ";
	}
	}
	return 0;
}
