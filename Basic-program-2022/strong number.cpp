//check if the number is strong number or not..
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int strong_num(int num){
	int sum=0;
	while(num>0){
		int digit=num%10;
		sum=sum+factorial(digit);
		num=num/10;}
		return sum;
	}
//mistake-incorrect closing braces, i.e.,no braces in line 16..,

int main(){
int number=145;
int ans=strong_num(number);
if(ans==number && number !=0){
	cout<<"yes";}
	else{
		cout<<"No";
	}
}	
	
