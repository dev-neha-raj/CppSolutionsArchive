//maximum and minimum digit in a number...
#include <bits/stdc++.h>
using namespace std;
int main(){
	int num,i,digit;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	while(num!=0){
	digit=num%10;
	num=num/10;	
	}
	 if(digit>INT_MIN){
	 cout<<"The smallest digit is:"<< digit <<endl;	
	 }		
}
