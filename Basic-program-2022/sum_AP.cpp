#include <bits/stdc++.h>
using namespace std;
float sumAP(float a,float d, int n){
	 float sum=(n/2.0)*(2.0*a+(n-1)*d);
	 return sum;    	                                                                                            
}
int main(){
	float a=1.5; int d=3,n=5;
	cout<<"Sum of given AP series: "<<sumAP(a,d,n)<<endl;  
}
