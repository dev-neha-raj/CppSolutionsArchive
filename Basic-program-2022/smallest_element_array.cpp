#include <bits/stdc++.h>
using namespace std;
int smallest_elem(int arr[],int n){
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int n=6;
	int arr[]={3,5,2,6,8,9};
	int min=smallest_elem(arr,n);
	cout<<"Smallest element of an array is:"<<min;
	return 0;
}
