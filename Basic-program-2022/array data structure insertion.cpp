//insert element at any position.
#include <iostream>
using namespace std;
int main(){
	int index,elem;int n=6;int i;
	int arr[n]={12,43,25,64,56,31};
	cout<<"Enter the position and element to be inserted:"<<endl;
	cin>>index>>elem;
	if(index<=n && index>=0){
		for(i=n;i>index;i--)
		arr[i]=arr[i-1];
		arr[index]= elem;
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}	
		
	}else{
		cout<<"Invalid input"<<endl;
	}
}
