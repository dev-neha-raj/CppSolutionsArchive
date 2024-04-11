//prime number in given range...
#include<bits/stdc++.h>
using namespace std;
bool chkPrime(int n){
	if(n==0 || n==1)
	return false;
	for(int i=2;i<sqrt(n);i++)
	if(n%i!=0)
	return true;
	else 
	return false;
}
int isPrime(int a, int b){
	for(int i=a;i<=b;i++)
	if(chkPrime(i))
	cout<<i<<" ";
}
int main(){
	isPrime(11,22);
	return 0;
}
