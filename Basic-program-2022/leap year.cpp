#include<stdio.h>
void leap(int){
	int n;
	if(n%4==0){
		printf("%d is leap year\n",n);
	}
	else if(n%400==0){
		printf("%d is leap year\n",n);
	}
	else if(n%100==0){
		printf("%d is not a leap year\n",n);
	}
	else{
		printf("%d is a normal year\n",n);
	}
}
int main(){
	int n;
	printf("Enter the year: ");
	scanf("%d",&n);
	leap(n);
    return 0;  
}
