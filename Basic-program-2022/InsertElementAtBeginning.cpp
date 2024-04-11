//inserting an element in an array at beginning, any position or at the end..
#include<iostream>
using namespace std;
elemAtBeginning(int *arr[],int n, int val){
for(int i=n;i>0;i--){
arr[i+1]=arr[i];}
arr[i]=val;
}
elemAtEnd(int *arr, int n, int val){
  arr[n]=val;		
}

elemAtPos(int *arr, int n, int val, int pos){
for(int i=n; i>=pos;i--){
arr[i]=arr[i-1];}
arr[pos-1]=val;}	

int main(){
int arr[9]={12,14,10,11,17,18,15,10};	
int n=8;
int pos=5; int val=30;
cout<<"Before entering the values in an array:"<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" "<<;
	cout<<endl;
}
cout<<"After entering the values in an array:"<<endl;
elemAtBeginning(arr, n,val);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" "<<;
	cout<<endl;
}
return 0;
}
