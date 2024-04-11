// factors of a given number..
#include<bits/stdc++.h>
using namespace std;
void fact(int x){
	for(int i=1;i<=x;i++)
		if(x%i==0)
		cout<<" "<<i;
}

int main(){
	int x=8;
	cout<<"The factorial of the given number is: ";
	fact(x);
	return 0;
}
