//permutation in which N people can occupy R seats in classroom...
//we have to find the value of n!/(n-r)!..
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}
int main(){
	int num=6,den=4;
	int permutation= fact(num);
	int permutation2=fact(num-den);
	cout<<"The permutation of the given number is:"<<permutation/permutation2;
}
