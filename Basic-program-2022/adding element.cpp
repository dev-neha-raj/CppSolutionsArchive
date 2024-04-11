#include <iostream>
using namespace std;
int ele_atfirst(int* arr,int n, int value){ 
	for(int i=n-1;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]= value;
}
int ele_atlast(int *arr,int n, int value){
	arr[n]=value;
}
int ele_mid(int *arr, int n, int value, int pos){
	for(int i=n;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=value;
}
int main(){
	int n=8;int pos=5;
	int arr[9]={10,9,14,8,20,48,16,9};
	int value= 40;
	cout<<"Before inserting the values in an array element:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	ele_atfirst(arr,n,value);
	cout<<"After inserting the value at beginning: "<<endl;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	 ele_atlast(arr,n,value);
	cout<<"After inserting the value at end: "<<endl;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	ele_mid(arr,n,value,pos);
	cout<<"After inserting the value at specified position: "<<endl;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
