#include<bits/stdc++.h>
using namespace std;
bool chkPrime(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
}
int main(){
	int n;
	cout<<"Enter the value: " ;
	cin>>n;
	bool chk= chkPrime(n);
	if (chk==true){
		cout<<"Prime number";}
		else{
			cout<<"Non-prime number";}
			return 0;
		}

