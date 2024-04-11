#include<bits/stdc++.h>
using namespace std;
//binary search..
int binarySeach(int arr[],int n, int low, int high){
	while(low<=high){
	int mid;int k;
	mid=(high+low)/2;	
	if(arr[mid]==k){
		k=arr[mid];
	}else if(arr[mid>k]){
		mid=low+1;
	}
else{
	mid=high-1;
}
}
return -1;
}
//bada-ar1,n 
void SortArray(int ar1[], int n, int ar2[], int m){
	int visited[n];int inx;
	int temp[n];
	for(int i=0;i<n;i++){
		temp[i]=ar1[i];
		visited[i]=0;
	}
	sort(temp, temp+n);
	int idx;
	int f= binarySeach(ar1,n,0,n-1);
	for(int j=f;(j<m && temp[j]==ar2[j]);j++){
		ar1[inx++]=temp[j];
		visited[j]=1;
	} 
for(int i=0;i<n;i++){
	if(visited[i]==0)
	ar1[idx++]=temp[i];
}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
int ar1[]={1,3,5};
int ar2[]={1,1,2,3,6,5,8,5};
int n=sizeof (ar1)/sizeof (ar1[0]);
int m=sizeof (ar2)/sizeof (ar2[0]);
cout<<"The sorted array is: "<<endl;
SortArray(ar1,n,ar2,m);
 printArray(ar1,n);
return 0;
}
