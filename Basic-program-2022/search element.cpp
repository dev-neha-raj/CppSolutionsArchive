#include <iostream>
using namespace std;
int main(){
	int element,i;
	int n=8;
	int arr[n]={2,4,8,10,6,9,1,5};
	cout<<"Enter the element you want to search: ";
	cin>>element;
	for(i=0;i<n-1;i++){
	if(arr[i]==element){
	 flag=1;
	 break;
}}
if(flag==1)
	cout<<"Element found"<<endl;
else
	cout<<"Element not found"<<endl;
	return 0;
}

