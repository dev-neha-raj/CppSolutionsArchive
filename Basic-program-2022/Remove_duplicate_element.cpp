#include <bits/stdc++.h>
using namespace std;
void rem_dupUnsort(int arr[], int n){
int visited[n]={1};
for(int i=0;i<n;i++){
	if(visited[i]==1){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			visited[j]=0;
		}
	}
for(int i=0;i<n;i++){
	if(visited[i]==0){
	cout<<arr[i]<<" ";	
	}	
}	
}
}
}

int main(){
int arr[]={4,3,9,2,4,1,10,8,9,3,4};
int n=sizeof (arr)/ sizeof(arr[0]);
 rem_dupUnsort(arr,n);
 return 0;
}
