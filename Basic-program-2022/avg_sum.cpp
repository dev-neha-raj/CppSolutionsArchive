#include <stdio.h>
#include <math.h>
void func(int a, int b, int c, int d, int e, float *sum, float *avg);
int main(){
int a,b,c,d,e;
float sum, avg, std_dev;
printf("Enter the values: ");
scanf("%d\n" "%d\n" "%d\n" "%d\n" "%d\n",&a,&b,&c,&d,&e);

func(a,b,c,d,e, &sum, &avg);
printf("The sum of the numbers is:%f\n ",sum);
printf("The Average of the numbers is:%f\n",avg);

} 
void func(int a, int b, int c, int d, int e, float *sum, float *avg){
*sum = a+b+c+d+e;
*avg= *sum/5.0;
}
