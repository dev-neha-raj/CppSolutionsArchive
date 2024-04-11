//to check if the number is harshad number..
//harshad number-if it is divisible by sum of its digits..
//378=3+7+8=18,, 378/18=yes,so, harshad number..
#include<iostream>
using namespace std;
int main(){
	int num=378;int sum=0;int digit=num;
	while(digit!=0){
		digit=digit%10;
		sum +=digit;//why wrong??
		//sum +=digit%10;//when this is right.
		digit=digit/10;	}	
	if(num%sum==0){
		cout<<"Harshad number";
	}
	else {
		cout<<"Not a harshad number";
	}

}
