#include <iostream>
using namespace std;
int main(){
	int t=0;int n=7;
	for(int m=1;m>=7;m++){
		if(m>=n)
		cout<<t;	
		else
			t=t+m;
			m+=1;
			cout<<t;
	}
}


