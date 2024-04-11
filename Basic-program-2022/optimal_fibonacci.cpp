#include <bits/stdc++.h>
using namespace std;
int fac(int n){
	int ans=1;
	for(int i=0;i<=n;i++){
		ans=ans*i;}
		return ans;
	}
int main(){
	int n;
	cout<<"Enter the number whose fibonacci you wanted to know:"<<endl;
	cin>>n;
	if(n==0 || n==1){
		return 1;
	}

		return n*fac(n-1);
}
