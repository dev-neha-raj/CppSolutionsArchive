#include<bits/stdc++.h>
using namespace std;
bool isSubset(int ar1[], int n, int ar2[], int m){
if(n>m)
return false;
unordered_map <int, bool> mp;
for(int i=0;i<m;i++){
mp[ar2[i]]= true;
}
for(int j=0;j<n;j++){
	if(mp.count(ar1[j])==0){
		return false;
	}
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
