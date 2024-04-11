//using hashmap to get solution in O(1) time
#include<bits/stdc++.h>
using namespace std;
void find_nonRep(vector<int> &num){
	unordered_map<int, int>hashmap;
	for(auto i:num)
	++hashmap[i];
	for(auto pairInmap:hashmap)
	if(pairInmap.second==1)
	cout<<pairInmap.first<<" ";
}
int main(){
	vector <int> num={1,-1,2,5,4,3,3,2,6};
	cout<<"Non-repeating elements are:"<<endl;
	find_nonRep(num);
	return 0;
}
