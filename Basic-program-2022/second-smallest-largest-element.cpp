//better approach
#include<bits/stdc++.h>
using namespace std;
int sec_smlr(int arr[],int n){
	if(n==0 || n==-1)
	cout<<-1<<endl;
	int small=INT_MAX; int sec_small=INT_MAX;
	int large=INT_MIN; int sec_large=INT_MIN;
	int i;
	for(i=0;i<n;i++){
	small= min(small,arr[i]);
	large= max(large,arr[i]);
    }
	for(i=0;i<n;i++)
	{
		if(arr[i]<sec_small && arr[i]!=small)
		sec_small=arr[i];
		if(arr[i]>sec_large && arr[i]!=large)
		sec_large=arr[i];
	}
	cout<<"The smallest element is: "<<sec_small<<endl;
	cout<<"The largest element is: "<<sec_large<<endl;
	}
	int main(){
	int ar1[]={12,11,13,15,16,9,7};
	int n=sizeof(ar1)/sizeof(ar1[0]);
	sec_smlr(ar1,n);
	return 0;	
	}
