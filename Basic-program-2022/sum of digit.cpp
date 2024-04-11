//sum of the digits of the number..
#include<iostream>
using namespace std;
int sumofdigit(int m)
{
	int digit,sum=0;
	while(m!=0){
		digit=m%10;
		sum +=digit;
		m=m/10;
	}
	return sum;
	}
int main(){
	int m=675;
	cout<<"Sum of the digit is: "<<sumofdigit(m);
	return 0;
}
