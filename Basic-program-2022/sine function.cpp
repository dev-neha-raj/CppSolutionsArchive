#include<stdio.h>
#include<math.h>
int fact (int x);
int main(){
	double x,ax,ss=0,sin_x=0,temp;
	int i,n,sign=-1;
	printf("Enter x: ");
	scanf("%lf",&x);
	printf("Enter n: ");
	scanf("%d",&n);
	//convert degree into radian
	ax =x;
	x=x*(3.14159/180);
	//functionality
	for(i=1;i<=n;i=i+2){
		sign=-sign;
		temp=sign*pow(x,i)/fact(i);
		sin_x=temp + sin_x;
	}
	printf("sin(%.2lf) using functionality:%lf",ax,sin_x);
	//check with sin function
	ss= sin(x);
	printf("\nsin(%.2lf) using math.h: %lf",ax,ss);
	}
	int fact(int n){
		int i,fact=1;
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		return fact;
	}
	
