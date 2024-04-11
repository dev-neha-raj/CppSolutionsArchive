#include <iostream>
using namespace std;
int removeDuplicate(int arr[]){
	int i=0;
	for(int j=1;j<7;j++){
		if(arr[i]!=arr[j]){
			i++;
		arr[i]=arr[j];
		}
	}
//return i+1;	
}
int main(){
	int arr[]={1,1,2,2,2,3,3};
		cout<<"The array before removing duplicate element is: ";     
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
		}	cout<<endl;
	int k=removeDuplicate(arr);
	cout<<"The array after removing duplicate element is: ";     
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
}
}

