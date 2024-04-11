//capitualise first and last character of each word;
#include <bits/stdc++.h>
using namespace std;
void capitalise(string str, int size){
	for(int i=0;i<size;i++){
		if(i==0||i==(size-1) && (int)str[i]>=97){
			str[i]==((char)(int)str[i]-32));}
			else if(str[i]==''){
				if((int)str[i-1]-32)>=65)
				str[i-1]=((char(int) str[i-1]-32));
				if((int)str[i+1]-32)>=65)
				str[i+1]=((char)((int))str[i+1]-32));}}
				cout<<"String after capitualising the first and last letter:"<<"\n";
				cout<<str<<"\n";
			}
			int main(){
				string str="this is a string ";
				int size=str.length();
				capitalise(str,size);
			    return 0;
			}



