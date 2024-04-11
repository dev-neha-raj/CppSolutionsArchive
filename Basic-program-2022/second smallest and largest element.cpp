//second smallest and second largest element in an array...
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int largest_Elem(int arr[],int n){
	int max_val;
	max_val= arr[0]; 
	for(int i=0;i<n;i++){
		if(max_val<arr[i]){
			max_val= arr[i];
		}
	}
	return max_val;
}
int main(){
int ar1[]={2,4,1,8,9,11,0};
int n= 7;
int max_val=largest_Elem(ar1,n);
cout<<"Largest element of an array is: "<<max_val;
return 0;	
}
