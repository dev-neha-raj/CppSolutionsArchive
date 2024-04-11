//prime number or not
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
if(n==0 or n==1)
return 0;	
for (int i=2;i<sqrt(n); i++){
	if (n%i !=0)
	return true;
	else 
	return false;
}
}
int main(){
	int n;
cout<<"Enter the number:"<<endl;
cin>>n;
if(isPrime(n))
cout<<"Is a prime number"<<endl;
else
cout<<"Not a prime number"<<endl;
return 0;
}
