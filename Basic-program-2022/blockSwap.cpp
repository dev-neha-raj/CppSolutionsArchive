#include <iostream>
using namespace std;
void swap(int arr[],int a,int b, int k){
	for(int i=0;i<k;i++){
		int temp= arr[a+i];
		arr[a+i]=arr[b+i];
		arr[b+i]=temp;
	}
}
void BlockSwap(int arr[],int k, int n)
{
	if(k==0 ||k==n)
	return;
	if (k==n-k){
		swap(arr,0,n-k,k);
		return;
	}
else if(k<n-k){
	swap(arr,0,n-k,k);
	BlockSwap(arr,k,n-k);
}
else{
	swap(arr,0,k,n-k);
	BlockSwap(arr+n-k,2*k-n,k);
}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=7;
	int k=2;
	cout<<"Before Rotating the array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" " ;
	cout<< endl;
	BlockSwap(arr,k,n);
	cout <<"After Rotating the array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
	}

