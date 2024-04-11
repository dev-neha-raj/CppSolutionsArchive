#include <bits/stdc++.h>
using namespace std;
void remDup(vector<int> &arr){
	sort(arr.begin(),arr.end());
	cout<<"The repeating elements are:"<<endl;
	for(int i=0;i<arr.size()-1;i++)
	if(arr[i]==arr[i+1])
	cout<<arr[i]<<" ";}
	
	int main(){
		vector<int> arr={1,1,1,3,3,4,4,5,5,6};
		remDup(arr);
		return 0;
	}

