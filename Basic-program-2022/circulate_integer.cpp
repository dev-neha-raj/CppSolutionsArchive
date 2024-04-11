#include <stdio.h>
int circulate(int *a, int *b, int *c);
int main(){
int x,y,z;
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);	
printf("Enter z:");
scanf("%d",&z);
printf("The number before circulation is: %d %d %d",x,y,z);
circulate(&x,&y,&z);
printf("\nThe number after circulation is: %d %d %d",x,y,z);	
}
int circulate(int *a ,int *b, int *c){
int temp;
temp=*c;
*c=*b;
*b=*a;
*a=temp;	
}

