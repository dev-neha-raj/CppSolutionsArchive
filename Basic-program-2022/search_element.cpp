//To search an element in an array 
#include <iostream>
using namespace std;
int main(){
int n,elem; int ar[n];
cout<<"Enter the size of an array"<<endl;
n=sizeof(ar)/sizeof(ar[0]);
cin>>n;
cout<<"Enter the elements of an array"<<endl;
for(int i=0;i<n;i++){
cin>>ar[i] ;
}
cout<<"Enter the element you want to search"<<endl;
cin>>elem;
for(int i=0;i<n;i++){
if(ar[i]==elem){
	cout<<"Element is present at index "<<i<<endl;	
}
	else{
		cout<<"Element is not present in the array"<<endl;
}
}
}
/

