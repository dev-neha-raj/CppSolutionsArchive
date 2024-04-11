#include<bits/stdc++.h>
using namespace std;
/*int factorial(int x){
	int ans=1;
	for(int i=1;i<=x;i++){
		ans=ans*i;
	}return ans;
}*/
//recursive approach..
int factorial(int x){
	if(x==0){
		return 1;
	}
	return x*factorial(x-1);
	
}
int main(){
	//int x=9;
	cout<<"Factorial of 10 is:"<<factorial(10)<<endl;
}

