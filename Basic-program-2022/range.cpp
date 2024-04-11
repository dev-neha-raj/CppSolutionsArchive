#include<stdio.h>
#include<stdlib.h>

int range(int min, int max)
{
	int digit, y = 0;
	for(int i=min;i<=max;i++)
	{
		digit=i;
		y=0;
		while(min)
		{	
		
			digit = min%10;
			y = y*10+digit;
			min=min/10;
		}
		if(i==min)
		{			printf("%d", i);
		}
			
	}
	
	return 0;
}
int main()
{
	int min = 10, max = 50;
	range(10,50);
	return 0;
}
