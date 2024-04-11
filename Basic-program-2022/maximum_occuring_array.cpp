//maximum occuring character in the input string...
//using frequency array..
#include <bits/stdc++.h>
using namespace std;
char maxOccuringChar(string str){
	char ans;
	int maxfreq=0,n=str.length();
	int count[256]={0};
	for(int i=0;i<n;i++){
		count[str[i]]++;
		if(count[str[i]]>maxfreq){
			maxfreq=count[str[i]];
			ans=str[i];
		}
	}
	return ans;
} 
int main(){
	string str="takeyoufooorward";
	cout<<"Maximum occuring character is: "<<maxOccuringChar(str)<<endl;}








