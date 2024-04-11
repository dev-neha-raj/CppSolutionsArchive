#include<iostream>
#include<algorithm>
using namespace std;
int getMedian(int arr[],int n){
	int med1,med2;
	sort(arr,arr+n);
	if(n%2==0){
    med1 = (n/2);
    med2 = (n/2)-1;
    cout<<"The median is : "<<(double)(arr[med1]+arr[med2])/2;
	}
	else{
    cout<< arr[(n/2)];	
	}	
}
int main(){
	int arr[]={12,10,7,5};
	int n= sizeof(arr)/sizeof (arr[0]);
	cout<<"The median of the array is: ";
	getMedian(arr,n);
	return 0;
}



