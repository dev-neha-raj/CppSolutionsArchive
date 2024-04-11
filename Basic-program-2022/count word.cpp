// count number of words in a given string...
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str="HI MY NAME IS NEHA";
	int n=str.length();
	int spaces=0;
	for(int i=0;i<n;i++){
		if(str[i]==' ')
		spaces=spaces+1;
	}
cout<<"The number of words are: "<<spaces+1;	
}
