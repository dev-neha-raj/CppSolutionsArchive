//rotating the elements of an array to left by 2;
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
	while(start<=end){
	int temp;
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;}	
	}
	
void rotatetoleft(int arr[],int n,int k){
//reversing first n-k element.
reverse(arr,0,n-k-1);
//reversing last k element.
reverse(arr,n-k,n-1);
//reversing the whole array.
reverse(arr,0,n-1);

}
int main(){
	int arr[]={2,3,4,1,8,6,9};
	int n=7;
	int k=2;
	rotatetoleft(arr,n,k);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
return 0;	
}
