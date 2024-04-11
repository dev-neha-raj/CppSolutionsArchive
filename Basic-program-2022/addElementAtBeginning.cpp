//to add element in an array at the beginning, at the end, at any position..
#include <iostream>
using namespace std;
int beginning(int arr[], int n, int val){
	for(int i=n-1;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=val;
}

int atEnd(int arr1[], int n1, int val1){
	arr1[n]=val;
}

int main(){
int arr1[9]={12, 14, 15, 18, 21, 19, 23, 29};
int n1=sizeof (arr)/ sizeof (arr[0]);
int val1=22;
int pos=6;
cout<<"Before inserting element"<<endl;
for(int i=0;i<n-1;i++){
	cout<<arr[i]<<" ";
}	
cout<<endl;
beginning(arr,n,val);
cout<<"After inserting element at the beginning:"<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"After inserting element at the end:"<<endl;
atEnd(arr1,n1, val1);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}


return 0;
}
