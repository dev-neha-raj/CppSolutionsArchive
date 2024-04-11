//repeating element in an array..
#include <iostream>
using namespace std;
repeatelem(int arr[],int n){
	int count=0;int duplicate[n];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j])
			duplicate[count++]=arr[i];
		}
	}
	for(int i=0;i<count;i++){
		if(duplicate[i] !=duplicate[i+1])
		cout<<duplicate[i]<<" ";
	}
}
int main(){
	int arr[]={1,1,2,3,4,4,5,2};
	repeatelem(arr,8);
	
	}
