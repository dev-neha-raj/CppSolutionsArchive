//to check if the number is automorphic or not...
//square ends in the same digit as the number..
#include<iostream>
using namespace std;
bool isAutomorphic(int n){
	int sq=n*n;
	while(n>0){
		if(n%10 !=sq%10)
		return false;
		n /=10;
		sq/=10;
	}
	return true;
}
int main(){
	int n=15; 
	if(isAutomorphic(n))
	cout<<"Automorphic number"<<endl;
	else
	cout<<"Not Automorphic number"<<endl;
	return 0;
}
