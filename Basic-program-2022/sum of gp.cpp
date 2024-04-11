#include <iostream>
using namespace std;
float SumofGP(float a,float r,int n){
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a;
		a=a*r;}
		return sum;
	}
	
	int main(){
		float a=12;
		float r=1.5;
		int n=4;
		cout<<"Sum of GP series is: "<<SumofGP(a,r,n);
		return 0;
	}
	
