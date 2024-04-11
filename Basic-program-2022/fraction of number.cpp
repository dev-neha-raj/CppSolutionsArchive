//program to add two fractions..
//first of all how i used to find fractions in maths?
//5/8+7/9=>?
/* 
1)lcm of denominator-code for it.,,
2)the lcm/9 will be multiplied with 5. and lcm/8 multiplied by 7...
3)then will add both with common denominator,, and will get the result...
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
return gcd(b,a%b);	
}
void func(int &num3, int &den3){
	int gcdz=gcd(num3,den3);
	num3 /= gcdz;
	den3 /= gcdz;
	
}
int main(){
	
int num1=3,den1=4,num2=1,den2=7,num3,den3;
int lcm=(den1*den2)/gcd(den1,den2);
den3=lcm;
num3=num1*(den3/den1)+num2*(den3/den2);
func(num3,den3);
cout<<"The fraction of the given number is: ";
cout<<num1<<"/"<<den1<<"+"<<num2<<"/"<<den2<<"="<<num3<<"/"<<den3;		
}

