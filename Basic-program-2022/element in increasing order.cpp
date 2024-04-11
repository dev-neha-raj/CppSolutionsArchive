//sort the array in ascending order;
#include <iostream>
using namespace std;
int main(){
		int arr[]= {12,11,13,9,2,15};
	    int n=6;int i,j;
		for (i=0;i<n;i++){
			for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);		
			}	 
		} 
	}
			cout<<"The number in increasing order is: "<<endl;
			for(i=0;i<n;i++){
				cout<<" "<< arr[i];
			}
	}	   

