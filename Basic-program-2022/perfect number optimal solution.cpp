#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
	int sum=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0)
		if(i*i==n ||i==1)
		sum=sum+i;
		else sum=sum+i+n/i;}
		if(sum==n)
		return true;
		else
		return false;
	}
	int main(){
		
		bool ex1=isPerfect(6);
		bool ex2=isPerfect(15);
		if(ex1==true){
			cout<<"6 is a Perfect number"<<endl; ;}
			else cout<< "6 is not a perfect number "<<endl;
		
		if(ex2==true){    
			cout<<"15 is a Perfect number" <<endl;}
			else cout<< "15 is not a perfect number "<<endl;;	
		}	
	
