//rotate element to left by 2.
#include <bits/stdc++.h>
using namespace std;
int rotate_elem(int arr[], int n, int k){
    int i;
    if(n==0)
    return 0;
    k=k%n;
    if(k>n)
    return 0;
    int temp[k];
    for(i=n-k;i<n;i++){
        temp[i-n+k]=arr[i];
    }
    for(i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
for(i=0;i<k;i++)
{
    arr[i]=temp[i];
}
}

  int main(){
  	int arr[]={3,4,5,2,1,7,2};
  	int n=7;int k=2;
  	 rotate_elem(arr,n,k);
  	 for(int i=0;i<n;i++){
  	     cout<<arr[i]<<" ";
  	 }
  	
  	return 0;
  }
