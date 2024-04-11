#include <iostream>
using namespace std;
int main(){
	int arr[][2]={{1,2},{3,4},{2,1},{4,3},{4,2}};
	int n=5;
	cout<<"The symmetric pairs are: ";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j][0]==arr[i][1] && arr[j][1]==arr[i][0]){
			cout<<"("<<arr[i][1]<<","<<arr[i][0]<<")"<<" ";
			break;
	}
}
}
}
