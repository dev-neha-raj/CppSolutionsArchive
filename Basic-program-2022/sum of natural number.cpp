#include <stdio.h>
int main(){
	int x,n,p,rec_sum();
	printf("Enter the number:");
	scanf("%d",&n);
	p=rec_sum();
	printf("\n The sum of first %d Natural Number is:%d",n,p);
}

int rec_sum(int ){
	int x,n;
	while(n != 0){
		x=n*(n-1)/2;
		}  
	}
