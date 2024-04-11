//prime factors of the given numbers..
#include<bits/stdc++.h>
using namespace std;
class primeFactor{
	public:
		void primeFactors(int n){
			cout<<"Prime factors: ";
			for(int i=2;n>1;i++){
				if(n%i==0){
					while(n%i==0){
						cout<<i<<" ";
						n=n/i;
					}
				}
			}
		}
};

int main(){
	int n=60;
	primeFactors p1;
	p1.primeFactors(n);
	return 0;	
}



