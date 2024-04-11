#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
	int i,key,j;
	for(i=1;i<n;i++){
		key=arr[i];//12,11,13,5,6 //key=11  11 12 13 5 6  11 12 5 13 6
		j=i-1;//j=0                 1)11 12 5 6 13 2)11 5 6 12 13 
		while(j >=0 && arr[j]>key){ //3)5 6 11 12 13
			arr[j+1]=arr[j];
			j--;
			//j=j-1;
		}
		arr[j+1]=key; //key=12
	}
}
void printArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main(){
	int arr[]={12,11,13,5,6};
	int N=sizeof(arr)/ sizeof(arr[0]);
	
	insertionSort(arr,N);
	printArray(arr,N);
	return 0;
}






