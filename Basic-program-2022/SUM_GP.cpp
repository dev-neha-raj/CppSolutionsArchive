//Sum of gp series..
//Sn = a(rn - 1) / (r - 1)
#include<iostream>
#include<math.h>
//a=first term; r=common difference; n=no.of terms;
using namespace std;
int main(){
	float sum=0.00f; int a,r,n;
	cin>>a>>r>>n;
	sum=a*((pow(r,n)-1)/(r-1));
	cout<<sum<<endl;	
	}
