#include <stdio.h>
printArray(int *A, int n){
for(int i=0;i<n;i++){
	printf("%d",A[i]);
	printf(" ");
}	
}
void merge(int A[],int mid,int low,int high){
	int i,j,k=0;int B[100];
	i=low, j=mid+1,k=low; 
	while(i<=mid && j<=high)
	if(A[i]<A[j]){
	B[k]=A[i];
	i++;k++;}
	else{
	B[k]=A[j];
	j++,k++;}
	while(i<=mid){
		B[k]=A[i];
		k++,i++;
	}
	while(j<=high){
		B[k]=A[j];
		k++;j++;
	}
	for(int i=low;i<=high;i++){
		A[i]=B[i];
	}
}

void mergeSort(int A[],int low,int high){
	if(low<high){
	  int mid=(low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
		merge(A,mid,low,high);}}	
	
int main(){
	int A[]={1,22,24,13,14,18};
	int n=6; 
	printArray(A,n);
	mergeSort(A,0,5);
	printf("\n");
	printArray(A,n);
	return 0;
}

