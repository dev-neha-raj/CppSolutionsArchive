//reverse the array
#include<bits/stdc++.h>
using namespace std
int main{
int n=6,i=0,j=n-1;
int arr1[]= {12,11,13,9,2,15};
 while(i<j)
 {
 		swap(arr1[i],arr1[j]);
 		i++;j--;
 } 
cout<<"The reversed array is: "<<endl;
for(i=0;i<n;i++){
	cout<<arr1[i];
	cout<<" ";
}
}
