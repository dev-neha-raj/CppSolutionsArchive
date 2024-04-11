#include <bits/stdc++.h>
using namespace std;
void find_nonRepElem(vector<int> &num){
	bool chk;
	for(int i=0;i<num.size();i++){
		chk=false;
		for(int j=0;j<num.size();j++){
			if(i!=j && num[i]==num[j]){
				chk=true;
				break;
			}
		}
		if(!chk){
			cout<<num[i]<<" " ;
		}
	}
	
}
int main(){
vector <int> num={1,2,-1,3,5,1};
cout<<"All non-repeating elements are:"<<endl;
find_nonRepElem(num);
return 0;
}
