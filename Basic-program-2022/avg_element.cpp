#include <iostream>
using namespace std;
int main(){
	 int arr[]={12,13,14,10,7,9};
	 int n= sizeof (arr)/ sizeof(arr[0]);
    double sum=0;double avr; 
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		avr=(sum/n);
	}
	 cout<<"The Average of an element is: " <<avr<<endl;
}
