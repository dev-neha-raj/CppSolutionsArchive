//finding equilibrium index;
#include<bits/stdc++.h>
using namespace std;
int EquilibriumIdx(int arr[], int n){
	int leftSum=0; int rightSum=0;
for(int i=0;i<n;i++){
//	int leftSum=0;
for(int j=0;j<i;j++){
	leftSum +=arr[j];
}
//	int rightSum=0;
for(int j=i+1;j<n;j++){
	rightSum += arr[j];
}
if(rightSum==leftSum)
return i;	
}
return -1;
}
int main(){
int arr[]={2,3,-1,8,4};
int n=5;
int x=EquilibriumIdx(arr,n);
cout<<x<<endl;
return 0;	
}
