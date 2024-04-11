#include <iostream>
#include <math.h>
using namespace std;

int Sum_gp(float a, float r, int n){
float sum=0; 
sum= a*(1-pow(r,n))/(1-r);
return sum;
}


int main()
{
    float a,r; int n;
 cout<<"Enter the value of first term"<<endl;
 cin>>a;
 cout<<"Enter the value of common ratio"<<endl;
 cin>>r;
 cout <<"Enter the number of terms"<<endl;
 cin>>n;
 cout<<"The summation of the geometric progression are:"<<Sum_gp(a,r,n)<<endl;
 return 0;
} 

//S_n = a(1 - r^n) / (1 - r)
/*
declared twice.
The summation calculation is inside the for loop, which means that it will be executed multiple times unnecessarily. */