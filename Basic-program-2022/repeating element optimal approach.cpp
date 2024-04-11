//better solution to find repeating element.
#include<bits/stdc++.h>
using namespace std;
void findRepeatingElem(vector<int>&arr){
	sort(arr.begin(),arr.end());
	cout<<"The Repeating Elements are: ";
	for(int i=0;i<arr.size()-1;i++)
	if(arr[i]==arr[i+1])
	cout<<arr[i]<<" ";
}
int main(){
	vector<int> arr={1,1,2,3,4,4,5,2};
	findRepeatingElem(arr);
	return 0;
}
