#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,s,ar;
	printf("Enter the sides of the triangles:");
	scanf("%d %d %d",&a,&b,&c);
	s= (a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle with given sides is:%d",ar);	
}
