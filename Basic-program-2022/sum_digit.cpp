#include<stdio.h>
int rec_func(int num);
int non_rec_func(int num);
int main()
{
int numb,num,n,recursion, non_recursion;
printf("Number daal: ");
scanf("%d",&num);
recursion= rec_func(num);
non_recursion= non_rec_func(num);
printf("\n Ye le recursion method se: %d",recursion);
printf("\n Ye le non- recursion method se:%d",non_recursion);
}
int rec_func(int num){
if (num==0){
	return 0;
}
return(num%10+rec_func(num/10));
}
int non_rec_func(int num){
int res, sum=0;
while(num !=0){
res=num%10;
sum += res;	
num =num/10;
}
return sum;
}
//so there i was facing one minute error to assigning variable name,,
//the variable that is to be processed,i should have give the same variable name 
//int main function as is given to  recursive and non-recursive function...
//i.e., it has to be same...
