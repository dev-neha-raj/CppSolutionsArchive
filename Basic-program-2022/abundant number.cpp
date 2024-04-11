//to check it the number is abundant number or not...
//if sum of divisor of a number is greater than number itself,,then it is an abundant
//number...
//18=1,2,3,6,9=21,yes an abundant number..
#include <iostream>
using namespace std;
int main(){
	int n=25,sum=0;
	for(int i=1;i<=n;i++){
	if(n%i==0){
		sum +=i;
	}
}
sum=sum-n;
if(sum>n){
	cout<<"Abundant number";
	}
	else{
		 cout<<"Not Abundant number";
	}
}




































/*int main(){
	int n=18;
	int sum=0;int digit=n;
    while(digit!=0){
    	sum +=digit%10;
    	digit=digit/10;
	}
	if(sum>n){
		cout<<"Abundant number";
	}
	else{
		cout<<"Not an abundant number";
	}
}
//why wrong??

because it is asking the sum of the divisor of the number,, not the sum of the digits.
of the number that's why.,,

*/
