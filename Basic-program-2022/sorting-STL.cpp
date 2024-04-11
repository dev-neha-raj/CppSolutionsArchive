#include <bits/stdc++.h>
using namespace std;
int main(){
int n=6;
int arr[n]={12,4,7,11,19,22};
map<int,int>mp;
int temp=1;
int dummy[n];
for(int i=0;i<n;i++){
	dummy[i]=arr[i];
}	
sort(dummy,dummy+n);
for(int i=0;i<n;i++){
	if(mp[dummy[i]]==0){
		mp[dummy[i]]=temp;
		temp++;
	}
}
for(int i=0;i<n;i++){
	cout<<mp[arr[i]]<<" ";
}
}
