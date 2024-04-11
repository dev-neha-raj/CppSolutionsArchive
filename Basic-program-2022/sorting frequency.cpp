//sort  the array according to frequency..
#include <iostream>
#include <algorithm>
using namespace std;
void sort(int arr2d[2][100],int k){
	for(int i=0;i<k-1;i++){
		for(int j=0;j<k-1-i;j++)
		{
		if (arr2d[1][j]<arr2d[1][j+1])
		{
		swap(arr2d[1][j],arr2d[1][j+1]);
		swap(arr2d[0][j],arr2d[0][j+1]);
		}
		}
	}
}
//function to sort element according to frequency..
void funSort(int arr[], int n){
	sort(arr,arr+n);
	int ar2d[2][100];
	int k=0;                                        
	int count=0;     
	for(int i=0;i<n;i++){
		//base case..
		if(i==0){
			ar2d[0][k]=arr[i];
			count =1;
		}
		else if(arr[i]==arr[i-1]){
			count++;
		}
		else{
			ar2d[1][k]=count;
			 count=1;
			 k++;
			 ar2d[0][k]=arr[i];
		}
	}
	ar2d[1][k]=count;
	k++;
	sort(ar2d, k);
	k=0;int i=0;
	while(i<n){
		while(ar2d[1][k]>0){
			arr[i]=ar2d[0][k];
			i++;
			ar2d[1][k]--;
		}
		k++;
	}
}
//driver code.
int main(){
	int n=8;
	int arr[]={1,2,3,2,4,3,1,2};
	funSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

