//changing case of each character in a string...
#include <iostream>
using namespace std;
void solve(string str, int n){
	for(int i=0;i<n;i++){
		int ascii=(int)str[i];
		if(ascii >=65 && ascii<=90)
		str[i]=((char)(ascii+32));	
		else if(ascii >=97 && ascii<=122)
		str[i]=((char)(ascii-32));}
		cout<< str <<"\n";	
	}
	
	int main(){
		string str="takE yOu foRward is a AwesoMe";
		int n=str.length();
		solve(str,n);
		return 0;
	}
	
	
	

