#include<bits/stdc++.h>
using namespace std;
void non_RepElem(int arr[],int n){
	int ele;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n-1;j++){
			if(arr[i] != arr[j]){
			 arr[ele]=arr[i];
			}
		}
		cout<<"The Non Repeating Element is: "<<endl;
		for(int i=0;i<n;i++){
			cout<<arr[ele]<<" ";
		}
	}
}
int main(){
	int arr[]={1,2,-1,3,3,4};
	non_RepElem(arr,6);
}
