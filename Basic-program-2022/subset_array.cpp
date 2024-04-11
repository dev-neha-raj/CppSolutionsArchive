// to check if array 1 is the subset of array 2;
//ar1-n chota array and ar2-m bada array.
#include<bits/stdc++.h>
using namespace std;
bool isSubset(int ar1[],int n,int ar2[],int m){
	if (n>m)
	return false;
	for(int i=0;i<n; i++){
		bool present=false;
		for(int j=0;j<m;j++){
			if(ar2[j]==ar1[i]){
				present= true;
				break;
			}
		}
		if(present ==false)
		return false;
	}
	return true;
}

int main(){
int ar1[]={10};
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
