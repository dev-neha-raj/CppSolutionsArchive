//to calculate the frequency of the first and last character..
#include <iostream>
using namespace std;

void printFrequency(string str){
	int freq[26]={0};
	for(int i=0;i<str.length();i++){
		freq[str[i]-'a']++;}
		for(int i=0;i<26;i++){
			if(freq[i] !=0){
				cout<<(char)(i+'a')<<freq[i]<<" ";
			}
		}
	}
	
	int main(){
		string str="takemebaby";
		printFrequency(str);
		return 0;
	}

