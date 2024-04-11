#include <bits/stdc++.h>
using namespace std;
int sec_smlr(int arr[],int n){
	int sec_small,sec_large,small,large,i;
	small=INT_MAX,sec_small=INT_MAX;
	large=INT_MIN,sec_large=INT_MIN;
	if(arr[i]==0 || arr[i]==-1){
		cout<<-1;}
		for(int i=0;i<n;i++){
			small=min(small,arr[i]);
			large=max(large,arr[i]);
		}
		for(int i=0;i<n;i++){
			if(arr[i]<sec_small && arr[i] !=small)
			sec_small=arr[i];
			if(arr[i]>sec_large &&arr[i]!=large)
			sec_large=arr[i];}
			cout<<"The second smallest element is:"<<sec_small<<endl;
			cout<<"The second largest element is:"<<sec_large<<endl;
		}

int main(){
	int ar1[]={12,11,24,15,14,19,13};
	int n=sizeof (ar1)/sizeof (ar1[0]);
	sec_smlr(ar1,n);
	return 0;
}
