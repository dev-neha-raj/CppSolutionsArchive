#include <bits/stdc++.h>
using namespace std;
int frequent(int arr[],int n){
	//mark all array elements as not visited
	vector<bool> visited(false,n);
	//traverse through the array element and count frequencies
	for(int i=0;i<n;i++){
		//skip the element if already processed
		if(visited[i]== true)
		continue;
		//count frequency
		int count =1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				visited[j]=true;
				count++;
			}
		}
		cout<<arr[i]<<" --> " <<count <<endl;
	}
}
int main(){
int arr[]={10,20,20,10,10,20,5,20};
int n=sizeof(arr) /sizeof(arr[0]);
frequent(arr,n);
return 0;	
}
