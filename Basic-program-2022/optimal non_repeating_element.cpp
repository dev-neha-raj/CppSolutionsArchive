//better solution --O(nlogn)
#include <bits/c++.h>
using namespace std;
void find_NonrepElement(vector <int> num){
	sort(num.begin(),num.end());
	for(int i=0;i<num.size();i++)
	if(num[0] !=num[1])
	cout<<num[0];
	for(int i=1;i<num.size()-1;i++){
		if(num[i-1]!=num[i] && num[i]!=num[i+1]){
			cout<<num[i]<<" ";
		}
	}
	if(num[num.size()-2] !=num[num.size()-1])
		cout<<num[num.size()-1]<<endl;
}

int main(){
vector <int> num={1,2,-1,3,5,1};
cout<<"All non-repeating elements are:"<<endl;
find_nonRepElem(num);
return 0;	
}
