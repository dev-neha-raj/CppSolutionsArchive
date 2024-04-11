#include <iostream>
#include <math.h>
using namespace std;
bool chkPrime(int x){
		if(x==1)
		return false;
		for(int i=2;i<sqrt(x);i++){
		if(x%i==0){
			return false;
		}
	}return true;
}

void findPrime(int lower,int upper){
	int p;
	for(int i=lower;i<=upper;i++){
		if (chkPrime(i)){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n,low,up;
	cout<<"Enter the lower range: ";
	cin>>low;
	cout<<"Enter the upper range: ";
	cin>>up;
	cout<<"The prime number between the given range is: ";
	findPrime(low,up);
	return 0;	
}
