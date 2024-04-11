//remove duplicate element from array..
#include <iostream>
using namespace std;
int removeDuplicate(int arr[],int n){
int i=0,j;
for(j=i+1;j<n;j++){
	if(arr[i] !=arr[j])
	i++,j++;
else if(arr[i]==arr[j])
	return i+1;	
}
}
int main(){
	int n;
	int ar[n];int i,x;
	cout<<"enter the size of an array:"<<endl;
	cin>>n;
	cout<<"enter the elements of an array:"<<endl;
	for(i=0;i<n;i++){
		cin>>ar[i];
	}
  //removeDuplicate(arr,n);
  cout<<"Array are removing duplicate elements:"<<endl;
  for(i=0;i<n;i++){
  	x=removeDuplicate(arr[],n);	
  }
  cout<<x<<endl;
}
