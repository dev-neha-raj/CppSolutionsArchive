#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void printArray(int *A, int n){
	for(int i=0;i<n;i++){
		printf("%d",A[i]);
		printf(" ");
	}
printf("\n");	
}
int Maximum(int A[], int n){
int max= INT_MIN;	
for(int i=0;i<n;i++){
if(max<A[i]){
	max=A[i];
}
}
return max;
}
void countSort(int *A,int n){
	int i,j;
	int max=Maximum(A,n); 
	
	int* count= (int*)malloc((max+1)*sizeof(int));
	for(int i=0;i<max+1;i++){
    count[i]= 0;
}
	for(int i=0;i<n;i++){
		count [A[i]]= count [A[i]]+1;
	}
     i=0;j=0; 
	 while(i<=max){
	 	if(count[i] >0){
	 		A[j]=i;
	 		count[i]=count[i]-1;
	 		j++;}
	 		else{
	 			i++;
			 }
		 }
	 }	 
 	 
int main(){
	int A[]={12,4,3,11,9,6};
	int n=6;
	printArray(A,n);
	countSort(A,n);
	printArray(A,n);
}
