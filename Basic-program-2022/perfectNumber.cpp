//to check the perfect number...
#include <iostream>
#include <math.h>
using namespace std;
bool chkPerfectNumber(int num){
	int sum=0;
	for(int i=1;i<=num-1;i++){
		if(num%i==0)
		sum=sum+i;}
	if(sum=num)
	return true;
	else return false;}

int main(){
	bool x1=chkPerfectNumber(7);
	if(x1==true){
		cout<<" 7 is perfect number";
	}	
	else
		cout<<"7 is a perfect number";
return 0;
}
