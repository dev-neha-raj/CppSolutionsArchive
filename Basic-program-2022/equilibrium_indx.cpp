#include <iostream>
using namespace std;
int findEqIndx(int nums[],int n){
	int totalSum=0;
	for(int i=0;i<n;i++){
		totalSum += nums[i];
	}
	int leftSum=0, rightSum=totalSum;
	for(int i=0;i<n;i++){
		rightSum -=nums[i];
		if(leftSum==rightSum){
			 return i;
		}
		leftSum +=nums[i];
	}
	return -1;
}
int main(){
	int n=5;
	int arr[]={2,3,-1,8,4};
	int equilibriumindx=findEqIndx(arr,n);
	cout<<equilibriumindx<<endl;
	return 0;
}





