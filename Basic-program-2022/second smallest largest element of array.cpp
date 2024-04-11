#include<bits/stdc++.h>
using namespace std;
int sec_elem(int arr[],int n){
	if(n==0 || n==1)
		cout <<-1 <<" "<<-1 <<endl;
		sort(arr,arr+n);
		int small =arr[1];
		int large =arr[n-2];
		cout<<"second smallest element is: "<<small<<endl;
		cout<<"second largest element is: "<<large<<endl;
	}
int main(){
	int arr[]={12,10,6,4,14,16};
	int n=sizeof(arr)/sizeof(arr[0]);
	sec_elem(arr,n);
	return 0;
}
