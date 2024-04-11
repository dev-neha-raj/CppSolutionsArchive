#include <stdio.h>
long long fac(int n){
	while(n!=0){
	if (n==1){
	return 1;
	}
	else{
		return (n*fac(n-1));
	} 
}
}
int main(){
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	long a=fac(n);
	printf("%d",a);
}
