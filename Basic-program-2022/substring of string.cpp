//to find the index of the starting of the substring..
#include<iostream>
#include<string>
using namespace std;
string findPattern(string text, string pattern){
	int n=text.length();
	int m=pattern.length();
	for(int i=0;i<n;i++){
		int temp=i;
		int j=0;
		for(int j=0;j<m;j++){
			if(text[temp] !=pattern[j]){
				break;
			}
			temp++;
		}
		if(j==m){
	
		}
	}
	return -1;
}
int main(){
	string text="takeyouforward";
	string pattern="forward";
	int foundIndx=findPattern(text,pattern);
	cout<<"The substring starts from the index:"<<foundIndx<<endl;
	return 0;
}
	

