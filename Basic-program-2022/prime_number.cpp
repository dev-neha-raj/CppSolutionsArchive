#include <stdio.h>
int prime(int num){
for(int i=2;i<=num;i++)
    {
	if(num%i==0){
	printf("%d",i);	
	num=num/i;	
	i--;
	}
}
}
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("\n Prime factor of %d is: ",num);
	prime(num);
}
