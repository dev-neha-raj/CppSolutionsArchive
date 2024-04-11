#include<bits/stdc++.h>
using namespace std;
bool Bsearch(int elem,int arr[],int n ){
int low=0;int high=n-1;
while(low<=high){
	int mid=(low+high)/2;
	if(arr[mid]==elem){
		return true;
	}
	else if(arr[mid]<elem){
		low =mid+1;
	}
	else{
		high= mid-1;
	}
}
return false;	
}

bool isSubset(int ar1[], int n, int ar2[], int m){
	sort(ar2,ar2+m);
	if(n>m)
	return false;
	for(int i=0;i<n;i++){
		bool present= Bsearch(ar1[i],ar2,m);
		if(present==false)
		return false;
	}
	return true;
}

int main(){
int ar1[]={11,31,12};
int ar2[]={1,4,2,3,6,5,8,9};
int n=sizeof (ar1)/sizeof (ar1[0]);
int m=sizeof (ar2)/sizeof (ar2[0]);
bool ans=isSubset(ar1,n,ar2,m);
if(ans==true){
	cout<<"is a subset"<<endl;
}	else{
	cout<<"is not a subset"<<endl;
}
return 0;	
}
