//using Recursion...
#include<stdio.h>
/*int binary(int n){
	if(n==0){
	return 0;
}
	else {
	return ((n%2)+10*binary(n/2));
}
}*/
//using non-recursion method...
int binary_2(int n){
	int x,zero=0,one=1;
	while(n !=0){
		x=n%2;
		zero= zero+(x*one);
		one =10*one;
		n=n/2;
	}
	return zero;
}
int main(){
	int n,x;
	printf("Enter the number: ");
	scanf("%d",&n);
	x= binary_2(n);
	printf("The binary equivalent of the given number is:%d ",x);	
}
