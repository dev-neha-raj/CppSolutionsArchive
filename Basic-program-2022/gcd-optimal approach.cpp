//to find gcd-optimal approach..
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main(){
	int a=4,b=8;
	cout<<"The GCD of the two number is: "<<gcd(a,b);
}
