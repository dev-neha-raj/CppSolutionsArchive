//maximum or minimum digits in the number....
#include<bits/stdc++.h>
using namespace std;
void maxMin(int n){
	int d, mini=INT_MAX,maxi=INT_MIN;
	while(n !=0){
		d=n%10;
		mini=min(mini,d);
		maxi=max(maxi,d);
		n=n/10;
	}
	cout<<"The minimum number is: "<<mini<<"\n";
	cout<<"The maximum number is: "<<maxi<<"\n";
}
int main(){
	int n=4376;
	maxMin(n);
	return 0;
}

