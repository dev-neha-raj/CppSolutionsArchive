#include<stdio.h>
   int func(int n){
 	for(int i=2;i<=n;i++){
 		if(n%i==0){
 			printf("%d",i);
 			n=n/i;
 			i--;
 			
		 }	
	 }
 }
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
 	printf("The prime factor of %d is: ",num); 
	func(num);
		 }	
	
