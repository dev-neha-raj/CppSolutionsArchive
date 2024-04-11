#include<iostream>
#include<algorithm>
using namespace std;
void sortArray(int arr[2][100],int k){
	for(int i=0;i<k-1;i++){
		for(int j=0;j<k-1-i;j++){
			if(arr[1][j]<arr[1][j+1]){
				swap(arr[1][j],arr[1][j+1]);
				swap(arr[0][j],arr[0][j+1]);
			}
		}
	}
}
//func to sort elements of array by freq.
void sortEle(int arr[],int n){
	sort(arr, arr+n);
	int arr1[2][100];
	int k=0;int count=0;
	for(int i=0;i<n;i++){
		if(i==0){
			arr[0][k]=arr[i];
			count 1;
		}
		else if(arr[i]==arr[i-1]){
			count++;
		}
		else{
			arr[1][k]=count;
			count=1;
			k++;
			arr[0][k]=arr[i];
		}
	}
	arr[1][k]=count;
	k++;
	sortarr(arr,k);
	k=0;int i=0;
	while(i<n){
		while(arr[1][k]>0){
			arr[i]=arr[0][k];
			i++;
			arr[1][k]--;
		}
		k++;
	}
}
int main(){
	int n=8;
	int arr[]={1,2,3,2,4,3,1,2};
	sortEle(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
