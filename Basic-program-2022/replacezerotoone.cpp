//vvi: to replace all the 0's with 1's in a given integer..
#include<iostream>
using namespace std;
int replaceZerotoOne(int num){
	if(num==0){
		return 1;
	}
	int ans=0,temp=1;
	while(num>0){
		int d=num%10;
		if(d==0){
			d=1;
		}
		ans= d*temp+ans;
		num=num/10;
		temp=temp*10;
	}
	return ans;
}

int main(){
	int n=2040012;
	int result=replaceZerotoOne(n);
	cout<<"After replacing zero with ones"<<" "<<n<<" "<<"becomes"<<" "<<result;
}






