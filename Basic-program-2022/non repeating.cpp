//non repeating element...
#include<bits/stdc++.h>
using namespace std;
int non_Repelement(int arr[],int n){
	int num;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n-1;j++){
			if(arr[i] != arr[j]){
				arr[num]=arr[i];
			}
		}
	for(int i=0;i<n;i++){
		cout<<arr[num]<<" ";
	}
	}
}

int main(){
	int arr[]={1,2,-1,3,3,4};
	non_Repelement(arr,6);
}
