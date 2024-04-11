#include <iostream>
using namespace std;
int duplicateUnsorted(int arr[],int n){
	int i=0;
    for(int j=1;j<n;j++){
	if(arr[i] != arr[j]){
	i++;
	arr[i]= arr[j];
}	
}
return i+1;
}
int main(){
	int arr[]={1,2,4,2,2,4,3,3};
	int n=8;
	cout<<"The array before removing duplicate element is: ";     
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
		}	cout<<endl;
	int k=duplicateUnsorted(arr,n);
	cout<<"The array after removing duplicate element is: ";     
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
}
}
