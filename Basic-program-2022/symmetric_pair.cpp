//using mapping...
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int n=5; 
	int arr[5][2]={{1,2},{2,1},{3,4},{4,5},{5,4}};
	unordered map <int, int>mp;
	cout<<"The Symmetric pairs are: "<<endl;
	for(int i=0;i<n;i++){
		int first = arr[i][0];
		int second = arr[i][1];
		if (mp.find(second) !=mp.end() && mp[second]==first){
		cout<<"("<<first<<" "<<second<< ")"<<" ";
		}
		else{
			mp[first]= second;
		}
}
}
