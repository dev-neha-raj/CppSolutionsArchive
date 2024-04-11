#include<stdio.h>
int main(){
extern int num;
printf("%d",num);
return 0;
}
int num=10;
