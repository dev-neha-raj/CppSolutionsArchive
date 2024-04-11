#include<stdio.h>
int printArray(int* A, int n){
	for(int i=0;i<n;i++){
		printf("%d",A[i]);
	}
printf("\n");	
}

void bubbleSort(int *A, int n){
	int temp;
	int isSorted =0;
	for(int i=0;i<n-1;i++)
	{
		printf("working on pass number %d\n",i+1);
		for(int j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
				temp = A[j];
				A[j]=A[j+1];
				A[j+1]= temp;
			}
		}
	}
}

void bubbleSortAdaptive(int *A, int n){
	int temp;int i;
	int isSorted=0;
	for(int j=0; j<n-1-i; j++){
		if(A[j]>A[j+1]){
			temp = A[j];
			A[j]= A[j+1];
			A[j+1]=temp;
			isSorted=0;
		}
	}
	if(isSorted){
		return;
	}
}

int main(){
int A[]={1,2,15,3,23,7};	
int n=6;
printArray(A,n);
bubbleSort(A,n);
printArray(A,n);
return 0;
}

