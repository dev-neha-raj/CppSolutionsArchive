#include<iostream>
#include<algorithm>
using namespace std;
char maxOccuringChar(string str){
	char ch=str[0];
	int i, max_freq=0, curr_freq=0;
	int n=str.length();
	for(i=0;i<n;i++){
		if(str[i]==str[i-1]){
			curr_freq++;
		}
		else{
			if(max_freq<curr_freq){
				max_freq=curr_freq;
				ch=str[i-1];
				curr_freq=0;
			}
		}
		if(max_freq<curr_freq){
			max_freq=curr_freq;
			ch= str[i-1];
		}
		return ch;
	}
}
	
	int main(){
		string str="takeyoufooorward";
		sort(str.begin(),str.end());
		cout<<"Maximum occuring character is: " <<maxOccuringChar(str);
	}
