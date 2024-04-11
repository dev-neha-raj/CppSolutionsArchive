#include<stdio.h>
#include<math.h> 
//int sin(int x);
int fac(int n);
int main(){
	int x,n;
	printf("Enter the value of x");
	scanf("%d",&x);
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("The summation of the series is:%d",sin(x));
	
}
int sin(int x){
	int fac();int n;
	while(n){
	int x= (x-pow(x,n)/fac());
}
}

int fac(){
	int n;
	while (n !=0){
	if (n==1){
		return 1;
	}
    else {
    	return (n*fac(n-1));
	}	
}
}
