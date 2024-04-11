//gcd of two numbers...
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num1=4,num2=8;
	int gcd;
	for(int i=1;i<=min(num1,num2);i++){
		if(num1%i==0 &&num2%i==0){
			gcd=i;
		}}
	cout<<"The GCD of the two number is:"<<gcd;
}

