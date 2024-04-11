 #include<stdio.h> 
 int main(){
 	int x,y,m,n,sum=0;
 	printf("Enter the 5-digit number\n");
 	scanf("%d",&x);
 	while(n!=0){
 	n=x/10000;//12345
 	sum=sum+n;
 	m=x%10000;
 	y=10000%10;
 	sum=sum+n;
 	}
 	printf("The sum of the digits of the 5-digit number is: ",sum); 	
 }
