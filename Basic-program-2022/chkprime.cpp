#include<iostream>
using namespace std;
int main(){
	int n; 
	if(n==1){
		return true  ;
	}
	for(int i=2;i<n;i++){
		if(n%i==0)                                                           
			cout<<"is prime number"<<endl;
		else
			cout<<"not a prime number"<<endl;} 
	}

