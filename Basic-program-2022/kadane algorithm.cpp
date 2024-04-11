#include<bits/stdc++.h>
using namespace std;
//kadane's algorithm
int MaxPSubArr(vector<int> &num){
	int p1=num[0], p2=num[0], result=num[0];
	for(int i=1;i<num.size;i++){
	int temp= max(num[i],p1*num[i],p2*num[i]);
	p2=	 min(num[i],p1*num[i],p2*num[i]);
	p1=temp;
	result=max(result,p1);
	}
	return result;
}
int main(){
vector <int> arr={1,2,3,0,-4,-5};
cout<<"The maximum product subarray are:"<< MaxPSubArr(arr)<<endl;
return 0;
}
