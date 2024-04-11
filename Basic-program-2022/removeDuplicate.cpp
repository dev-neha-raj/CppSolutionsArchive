#include <iostream>
using namespace std;
int remDuplicate(int arr[], int n){
	int count=0; int dup[n];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j])
			dup[count++]= arr[i];
		}
	}
	for(int i=0;i<count;i++){
		if(dup[i] != dup[i+1])
		cout<<dup[i]<<" ";
	}
}
int main(){
	int arr[]={1,1,1,2,2,3,3,4,4,4,5,5};
	int n= sizeof (arr)/sizeof (arr[0]);
	cout<<"The duplicate elements are: "<<endl;	
	remDuplicate(arr,n);
}
