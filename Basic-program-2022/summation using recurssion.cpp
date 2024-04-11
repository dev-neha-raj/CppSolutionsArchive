#include<stdio.h>
int sum(int num);
int rec_sum(int num);
int main(){
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("Non-Recursive summation of %d:%d", n,sum(n));
	printf("\nRecursion summation of %d:%d",n, rec_sum(n));
}
int sum(int num){
	int count;
	while(num){
	 count = count+ num;
		num= num-1;
	}
	return count;
}
int rec_sum(int num){
	while(num){
		return(num+rec_sum(num-1));
	}	
}
