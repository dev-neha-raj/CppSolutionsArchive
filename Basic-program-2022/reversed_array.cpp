#include<iostream>
#include<algorithm>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
		cout<<" ";
	}
}
int reversed_arr(int arr[],int n){
	reverse(arr,arr+n);
}
int main(){
	int arr[]={12,11,8,15,16,10,3};
	int n=7;
    reversed_arr(arr,n);
    printArray(arr,n);
    return 0;
}
