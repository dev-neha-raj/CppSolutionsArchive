#include<stdio.h>
int main(){
int i=5,j=4,k,l;
int addmult(int , int);
k=addmult(i,j);
l=addmult(i,j);
printf("%d %d\n",k,l);
return 0;	
}
int addmult(int ii,int jj)
{
	int kk,ll;
	kk=ii+jj;
	ll=ii*jj;
	return (kk,ll);
	} 
