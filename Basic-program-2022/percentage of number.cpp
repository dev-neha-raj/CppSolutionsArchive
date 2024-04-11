#include<stdio.h>
void func(float a, float b, float c, float *avg, float *percent);
int main(){
	float a,b,c; float avg, percent;
printf("Enter your English Marks: \n");
scanf("%d\n",&a);
printf("Enter your Maths Marks: \n");
scanf("%d\n",&b);
printf("Enter your Science Marks: \n");
scanf("%d\n",&c);	
func(a,b,c,&avg, &percent);
printf("The percentage is: %.2f\n",percent);
printf("The average of all subject is: %.2f\n",avg);
}
 void func(float p, float q, float r,float *avg, float *percent)
 {
 	float *sum;
 	*sum = p+q+r;
 	*avg=*sum/3.0;
 	*percent = (*sum/300.0)*100;
 }
