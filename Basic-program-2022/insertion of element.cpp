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
		for(i=0;i<=n;i++){
			cout<<arr[i]<<" ";
		}	
		
	}else{
		cout<<"Invalid input"<<endl;
	}
}

//Deletion...
#include <iostream>
using namespace std;
int main(){
	int index=-1,element,i;int n=8;
	int arr[n]={2,4,8,10,6,9,1,5};
	cout<<"Enter the element you want to delete: ";
	cin>>element;
	for(i=0;i<n;i++){
	if(arr[i]==element){
	 index=i;
	 break;	
	}}if(index !=-1){
		for(i=index;i<n-1;i++){
			arr[i]=arr[i+1];}
		cout<<"Array after deleting the elements: "<<endl;	
	for(i=0;i<n-1;i++)
	cout<<arr[i]<<" ";
}else
	cout<<"Invalid input"<<endl;
	return 0;
}
//searching...
#include <iostream>
using namespace std;
int main(){
	int element,i,flag;
	int n=8;
	int arr[n]={2,4,8,10,6,9,1,5};
	cout<<"Enter the element you want to search: ";
	cin>>element;
	for(i=0;i<n-1;i++){
	if(arr[i]==element){
	 flag=1;
	 break;
}}
if(flag==1)
	cout<<"Element found"<<endl;
else
	cout<<"Element not found"<<endl;
	return 0;
}


