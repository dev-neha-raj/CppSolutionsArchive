#include<stdio.h>
printArray(int *A, int n){
for(int i=0; i<n;i++){
	printf("%d",A[i]);
	printf(" ");
}
printf("\n");	
}

selectionSort(int *A, int n){
	int indexofMin, temp;
	printf("Running the selection sort...\n");
for(int i=0; i<n-1;i++){
	indexofMin=i;
	for(int j=i+1;j<n;j++){
		if(A[j]<A[indexofMin]){
			indexofMin=j;
		}
	}
		temp=A[i];
		A[i]=A[indexofMin];
		A[indexofMin]=temp;
	}
}		

int main(){
int A[]={12,2,3,21,18};


int n=5;
printArray(A,n);

selectionSort(A,n);
printArray(A,n);
return 0;	
}
