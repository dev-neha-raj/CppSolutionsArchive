#include<stdio.h>
void roman(int num){
while(num){
	if(num>=1000){
		printf("M");
		num=num-1000;
	}
 	else if(num>=500){
		printf("D");
		num=num-500;
	}
	else if(num>=100){
		printf("C");
		num=num-100;
	}
	else if(num>=50){
		printf("L");
		num=num-50;
	}
	else if(num>=10){
		printf("X");
		num=num-10;
	}  
	else if(num>=5){
		printf("V");
		num=num-5;
	}  
	else if(num>=1){
		printf("I");
		num=num-1;
	}                    
}
printf("\n");
}
int main(){
	int n,num;
printf("Enter the decimal number: ");
scanf("%d",&n);
//printf("The Roman equivalent for %d is: ",n);
  roman(n);
 return 0;	
}
