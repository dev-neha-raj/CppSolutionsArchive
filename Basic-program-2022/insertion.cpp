#include <stdio.h>
printArray(int *A,int n){
for(int i=0;i<n;i++){
printf("%d",A[i]);
}	
printf("\n");
}
 int insertionSort(int *A, int n){
 	int Key; int j;
 	//loop for number of passes
 	for(int i=1;i<=n-1;i++){
 		Key = A[i];
 		j=i-1;
 		while (j>=0 && A[j]>Key){
 			A[j+1]=A[j];
 			j--;	
		 }
		 A[j+1]=Key;
	 }
 	
 }

int main(){
int A[]={12,64,55,6,76,8};
int n=6;
printf("Before sorting\n");
printArray(A,n);
printf("\n");
insertionSort(A,n);	
printf("After sorting\n");
printArray(A,n);
printf("\n");
return 0;	
}
