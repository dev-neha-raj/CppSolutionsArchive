#include <bits/stdc++.h>
using namespace std;
int func(int r,int unit,int arr[],int n){
if(n==0)
return -1;
	int food= r*unit;
	int foodTillNow=0; //calculates the available food.
	int house=0;      // calculates the house reached till now.
	for(house=0;house<n;house++){
		foodTillNow +=arr[house];
		if(foodTillNow>=food){
			break;
		}
	}
	if(food>foodTillNow)
	return 0;
	return house+1;	
}
int main(){
int r,unit,n,arr[n];
cin>>r;	
cin>>unit;
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];	
}
cout<<func(r,unit,arr,n);
return 0;
}

