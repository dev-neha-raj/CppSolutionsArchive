#include<iostream>
#include<math.h>
using namespace std;
/*float sumGP(float a, float r, int n){
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a;
		a=a*r;}
		return sum;
	}
*/	
	float sumGP(float a,float r, int n){
		float sum=a*(pow(r,n)-1)/(r-1);
		return sum;
	}
int main(){
	float a=1.5,r=3;int n=5;
	cout<<"Sum of given GP series is: "<<sumGP(a,r,n);
	return 0;
}
