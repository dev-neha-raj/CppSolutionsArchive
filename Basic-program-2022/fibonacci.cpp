#include<stdio.h>
int fib(int n){
	if(n<=1){
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
}
}
int main(){
	int n,x;
	printf("Enter the number: ");
	scanf("%d",&n);
	x=fib(n);
	printf("The fibonacci of the given number is:%d ",x);	
}
