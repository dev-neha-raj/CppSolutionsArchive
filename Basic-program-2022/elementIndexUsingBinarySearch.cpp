#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int k){
	while(low<=high){
		int ans=-1;
		int mid=(low+high)/2;
		if(arr[mid]>k){
			high=mid-1;	
		}
		else if(arr[mid]<k){
			low=mid+1;
		}else{
			ans=mid;
			break;
		}	
	}	
}
int main(){
int arr[]={12,11,19,21,10,22,18,20};
int n=8; 
int ans= binarySearch(arr,0,n-1,18);
cout<<"The element is present at index "<<ans;
}
