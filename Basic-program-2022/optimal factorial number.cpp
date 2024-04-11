//factor of the given number using the optimised approach.
#include<bits/stdc++.h>
using namespace std;
void divisor(int x){
	for(int i=1;i<=sqrt(x);i++){
		if(x%i==0){
			if(x/i==i)
			cout<<" "<<i;
			else 
			cout<<" "<<i<<" "<<x/i;
		}
	}
}
int main(){
	int x=8;
	cout<<"The factorial of the given number is: ";
	divisor(x);
	return 0;
}
