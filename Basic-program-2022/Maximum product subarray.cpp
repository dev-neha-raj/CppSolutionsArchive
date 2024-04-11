#include<bits/stdc++.h>
using namespace std;
//optimal brute force..
int maxProdSubArr( vector <int> &arr){
	int result=arr[0];
	for(int i=0;i<arr.size()-1;i++){
	int prod=arr[i];
	for(int j=i+1;j<arr.size();j++){
	 prod *= arr[j];
	 result=max(result, prod);
	}
}
return result;
}
int main(){
vector <int> arr={1,2,3,0,-4,-5};
cout<<"The maximum product subarray are:"<< maxProdSubArr(arr)<<endl;
return 0;
}
